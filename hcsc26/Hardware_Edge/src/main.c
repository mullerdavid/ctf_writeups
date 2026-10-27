/*
 * main.c - Edge of Trust: Host Client Application
 *
 * This is the Normal World client that communicates with the
 * ta_loader Trusted Application via the TEE Client API.
 *
 * Usage:
 *   edge_of_trust addlog  <string>          Append text to TA log
 *   edge_of_trust readlog                   Read and display TA log
 *   edge_of_trust loadfw  <firmware.bin>    Load firmware into TA
 *   edge_of_trust getflag <encrypted.bin>   Decrypt the flag
 *
 * Build with:  make
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tee_client_api.h>

/* TA UUID - must match ta_loader */
#define TA_LOADER_UUID \
    { 0x8aaaf200, 0x2450, 0x11e4, \
        { 0xab, 0xe2, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } }

/* Command IDs - must match ta_loader.h */
#define CMD_ADD_LOG       0x01
#define CMD_READ_LOG      0x02
#define CMD_RUN_FIRMWARE  0x03
#define CMD_DECRYPT_FLAG  0x04

#define LOG_BUFFER_SIZE   256

/* ------------------------------------------------------------------ */
/* Utility                                                            */
/* ------------------------------------------------------------------ */

static void hexdump(const void *data, size_t len)
{
    const uint8_t *p = data;
    for (size_t i = 0; i < len; i++) {
        if (i > 0 && (i % 16) == 0)
            printf("\n");
        printf("%02x ", p[i]);
    }
    printf("\n");
}

static uint8_t *read_file(const char *path, size_t *out_len)
{
    FILE *f = fopen(path, "rb");
    if (!f) {
        perror(path);
        return NULL;
    }
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    if (sz <= 0) {
        fclose(f);
        fprintf(stderr, "%s: empty file\n", path);
        return NULL;
    }
    rewind(f);
    uint8_t *buf = malloc(sz);
    if (!buf) {
        fclose(f);
        return NULL;
    }
    if (fread(buf, 1, sz, f) != (size_t)sz) {
        free(buf);
        fclose(f);
        return NULL;
    }
    fclose(f);
    *out_len = sz;
    return buf;
}

/* ------------------------------------------------------------------ */
/* TEE session management                                             */
/* ------------------------------------------------------------------ */

static TEEC_Context ctx;
static TEEC_Session sess;

static int tee_open(void)
{
    TEEC_UUID uuid = TA_LOADER_UUID;
    TEEC_Result res;

    res = TEEC_InitializeContext(NULL, &ctx);
    if (res != TEEC_SUCCESS) {
        fprintf(stderr, "TEEC_InitializeContext: 0x%x\n", res);
        return -1;
    }

    res = TEEC_OpenSession(&ctx, &sess, &uuid,
                           TEEC_LOGIN_PUBLIC, NULL, NULL, NULL);
    if (res != TEEC_SUCCESS) {
        fprintf(stderr, "TEEC_OpenSession: 0x%x\n", res);
        TEEC_FinalizeContext(&ctx);
        return -1;
    }

    return 0;
}

static void tee_close(void)
{
    TEEC_CloseSession(&sess);
    TEEC_FinalizeContext(&ctx);
}

/* ------------------------------------------------------------------ */
/* Commands                                                           */
/* ------------------------------------------------------------------ */

static int do_addlog(const char *text)
{
    TEEC_Operation op = { 0 };
    TEEC_Result res;

    size_t len = strlen(text);
    op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INPUT,
                                     TEEC_NONE, TEEC_NONE, TEEC_NONE);
    op.params[0].tmpref.buffer = (void *)text;
    op.params[0].tmpref.size   = len;

    res = TEEC_InvokeCommand(&sess, CMD_ADD_LOG, &op, NULL);
    if (res != TEEC_SUCCESS) {
        fprintf(stderr, "addlog failed: 0x%x\n", res);
        return -1;
    }

    printf("Logged %zu bytes\n", len);
    return 0;
}

static int do_readlog(void)
{
    TEEC_Operation op = { 0 };
    TEEC_Result res;

    char buf[1024];
    memset(buf, 0, sizeof(buf));

    op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INOUT,
                                     TEEC_NONE, TEEC_NONE, TEEC_NONE);
    op.params[0].tmpref.buffer = buf;
    op.params[0].tmpref.size   = sizeof(buf);

    res = TEEC_InvokeCommand(&sess, CMD_READ_LOG, &op, NULL);
    if (res != TEEC_SUCCESS) {
        fprintf(stderr, "readlog failed: 0x%x\n", res);
        return -1;
    }

    uint32_t reported = op.params[0].tmpref.size;
    printf("Log (%u bytes):\n", reported);

    if (reported > 0)
        hexdump(buf, reported);
    else
        printf("  (empty)\n");

    return 0;
}

static int do_loadfw(const char *path)
{
    size_t fw_len = 0;
    uint8_t *fw = read_file(path, &fw_len);
    if (!fw)
        return -1;

    TEEC_Operation op = { 0 };
    op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INPUT,
                                     TEEC_NONE, TEEC_NONE, TEEC_NONE);
    op.params[0].tmpref.buffer = fw;
    op.params[0].tmpref.size   = fw_len;

    TEEC_Result res = TEEC_InvokeCommand(&sess, CMD_RUN_FIRMWARE, &op, NULL);
    free(fw);

    if (res != TEEC_SUCCESS) {
        fprintf(stderr, "loadfw failed: 0x%x\n", res);
        if (res == 0xFFFF0005)  /* TEE_ERROR_SECURITY */
            fprintf(stderr, "  -> Firmware signature mismatch\n");
        return -1;
    }

    printf("Firmware loaded and validated successfully\n");
    return 0;
}

static int do_getflag(const char *path)
{
    size_t enc_len = 0;
    uint8_t *enc = read_file(path, &enc_len);
    if (!enc)
        return -1;

    uint8_t out[4096];
    memset(out, 0, sizeof(out));

    TEEC_Operation op = { 0 };
    op.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_TEMP_INPUT,
                                     TEEC_MEMREF_TEMP_OUTPUT,
                                     TEEC_NONE, TEEC_NONE);
    op.params[0].tmpref.buffer = enc;
    op.params[0].tmpref.size   = enc_len;
    op.params[1].tmpref.buffer = out;
    op.params[1].tmpref.size   = sizeof(out);

    TEEC_Result res = TEEC_InvokeCommand(&sess, CMD_DECRYPT_FLAG, &op, NULL);
    free(enc);

    if (res != TEEC_SUCCESS) {
        fprintf(stderr, "getflag failed: 0x%x\n", res);
        if (res == 0xFFFF0010)  /* TEE_ERROR_ACCESS_DENIED */
            fprintf(stderr, "  -> Firmware not validated\n");
        return -1;
    }

    uint32_t out_len = op.params[1].tmpref.size;
    printf("Decrypted flag (%u bytes):\n", out_len);
    /* Print as text - the flag is ASCII */
    fwrite(out, 1, out_len, stdout);
    printf("\n");
    return 0;
}

/* ------------------------------------------------------------------ */
/* Main                                                               */
/* ------------------------------------------------------------------ */

static void usage(const char *prog)
{
    fprintf(stderr,
        "Edge of Trust - Firmware Loader Client\n"
        "\n"
        "Usage:\n"
        "  %s addlog  <text>           Append text to TA log buffer\n"
        "  %s readlog                  Read and display TA log\n"
        "  %s loadfw  <firmware.bin>   Validate and load firmware\n"
        "  %s getflag <encrypted.bin>  Decrypt the flag file\n",
        prog, prog, prog, prog);
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        usage(argv[0]);
        return 1;
    }

    if (tee_open() != 0)
        return 1;

    int ret = 0;

    if (strcmp(argv[1], "addlog") == 0) {
        if (argc < 3) {
            fprintf(stderr, "addlog requires a text argument\n");
            ret = 1;
        } else {
            ret = do_addlog(argv[2]) != 0;
        }
    } else if (strcmp(argv[1], "readlog") == 0) {
        ret = do_readlog() != 0;
    } else if (strcmp(argv[1], "loadfw") == 0) {
        if (argc < 3) {
            fprintf(stderr, "loadfw requires a firmware file path\n");
            ret = 1;
        } else {
            ret = do_loadfw(argv[2]) != 0;
        }
    } else if (strcmp(argv[1], "getflag") == 0) {
        if (argc < 3) {
            fprintf(stderr, "getflag requires an encrypted file path\n");
            ret = 1;
        } else {
            ret = do_getflag(argv[2]) != 0;
        }
    } else {
        fprintf(stderr, "Unknown command: %s\n", argv[1]);
        usage(argv[0]);
        ret = 1;
    }

    tee_close();
    return ret;
}