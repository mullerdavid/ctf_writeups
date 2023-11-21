#include <iostream>
#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>
#include <openssl/aes.h>
#include <algorithm>
#include <iomanip>

using namespace std;

void print_buffer(unsigned char *in_buffer, unsigned int in_buffer_size)
{
	for (int i=0;i<in_buffer_size;i++)
	{
		cout << (unsigned int)in_buffer[i] << " ";
	}
	cout << endl;
}

void pack_moves(char *in_buffer, unsigned int in_buffer_size, unsigned char *out_buffer, unsigned int *out_buffer_size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	signed int value;

	*out_buffer_size = 0;
	i = 0;
	k = 0;
	while ( i < in_buffer_size )
	{
		j = i >> 2;
		if ( !(i % 4) )
		{
			out_buffer[j] = 0;
			//cout << "out_buffer["<<j<<"] = 0;" << endl;
		}
		switch (in_buffer[i])
		{
			case 'w':
				value = 0;
			break;
			case 'n':
				value = 1;
			break;
			case 's':
				value = 2;
			break;
			case 'e':
				value = 3;
			break;
		}
		out_buffer[j] += value << 2 * k;
		//cout << "out_buffer["<<j<<"] += " <<(value << 2 * k) <<"; //" << value << "*2^" << 2*k << endl;
		*out_buffer_size = j + 1;
		++i;
		k = (k+1) % 4;
	}
}

void unpack_moves(unsigned char *in_buffer, unsigned int in_buffer_size, char *out_buffer, unsigned int *out_buffer_size)
{
	unsigned int i;
	unsigned char value;
	unsigned char chr;
	
	i = 0;
	while ( i < in_buffer_size )
	{
		value = in_buffer[i];
		for (unsigned int j=0;j<4;j++)
		{
			switch (((value >> j*2) & 3))
			{
				case 0:
					chr = 'w';
				break;
				case 1:
					chr = 'n';
				break;
				case 2:
					chr = 's';
				break;
				case 3:
					chr = 'e';
				break;
			}
			out_buffer[i*4+j] = chr;
			//cout << "out_buffer[" << i*4+j << "] = " << chr << ";" << endl;
		}
		*out_buffer_size = (i + 1)*4;
		++i;
	}
}

void dohash(unsigned char *in_buffer, unsigned int in_buffer_size, unsigned char *out_buffer)
{
	char secret[] = "PRENEELAPPROVESMAYBE";
	unsigned char iv[64];
	AES_KEY aes_key;
	unsigned char in_buff_padded[64];
	unsigned char out_buff_tmp[64];
	unsigned int size;
	
	SHA1((unsigned char*)secret, strlen(secret), iv);
	AES_set_encrypt_key(iv, 128, &aes_key);
	
	size = 16 * (in_buffer_size / 16);
	if ( in_buffer_size % 16 )
		size += 16;
	
	memset(in_buff_padded, 0, size);
	memcpy(in_buff_padded, in_buffer, in_buffer_size);
	
	AES_cbc_encrypt(in_buff_padded, out_buff_tmp, size, &aes_key, iv, AES_ENCRYPT);
	
	memcpy(out_buffer, out_buff_tmp + size - 16, 16);
	
	//print_buffer(out_buffer, 16);
}

void dohash_inverse_16(unsigned char *in_buffer, unsigned char *out_buffer)
{
	char secret[] = "PRENEELAPPROVESMAYBE";
	unsigned char iv[64];
	AES_KEY aes_key;
	unsigned char out_buff_tmp[64];
	unsigned int size;
	
	SHA1((unsigned char*)secret, strlen(secret), iv);
	AES_set_decrypt_key(iv, 128, &aes_key);
	
	//TODO: 32 big
	
	AES_cbc_encrypt(in_buffer, out_buff_tmp, 16, &aes_key, iv, AES_DECRYPT);
	
	memcpy(out_buffer, out_buff_tmp, 16);
	
	//print_buffer(out_buffer, 16);
}

void dohash_inverse_32(unsigned char *in_buffer, unsigned char *out_buffer, unsigned int out_buffer_size)
{
	char secret[] = "PRENEELAPPROVESMAYBE";
	unsigned char iv[64];
	unsigned char iv_null[64];
	AES_KEY aes_key;
	unsigned char out_buff_tmp[64];
	unsigned char in_buff_tmp[64];
	unsigned char cypher_block_tmp[64];
	unsigned char* ptr;
	unsigned int size;
	
	SHA1((unsigned char*)secret, strlen(secret), iv);
	AES_set_decrypt_key(iv, 128, &aes_key);
	memset(iv_null, 0, 64);
	
	size = 16 * (out_buffer_size / 16);
	if ( out_buffer_size % 16 )
		size += 16;
		
	//TODO: bigger than 32?
	memset(out_buff_tmp, 85, out_buffer_size); //85:nnnn packed
	memcpy(in_buff_tmp, in_buffer, 16);
	ptr = out_buff_tmp+out_buffer_size-16;
	
	AES_cbc_encrypt(in_buff_tmp, cypher_block_tmp, 16, &aes_key, iv_null, AES_DECRYPT);
	for (int i=0;i<16;i++) cypher_block_tmp[i]^=ptr[i];
	
	AES_cbc_encrypt(cypher_block_tmp, out_buff_tmp, 16, &aes_key, iv, AES_DECRYPT);
	
	memcpy(out_buffer, out_buff_tmp, out_buffer_size);
	
	//print_buffer(out_buffer, out_buffer_size);
}

void create_forward_secure_tokens(unsigned char *in_buffer, unsigned int in_buffer_size, unsigned char *out_buffer, unsigned int epoch)
{
	unsigned char buff1[64]; 
	unsigned char buff2[64];

	memcpy(buff1, in_buffer, in_buffer_size);
	
	dohash(buff1, in_buffer_size, buff2);
	for (int i = 1; i < epoch; ++i )
	{
		memcpy(buff1, buff2, 16);
		dohash(buff1, 16, buff2);
	}
	
	memcpy(out_buffer, buff2, 16);
}

void create_forward_secure_tokens_inverse(unsigned char *in_buffer, unsigned char *out_buffer, unsigned int out_buffer_size, unsigned int epoch)
{
	unsigned char buff1[64]; 
	unsigned char buff2[64];

	memcpy(buff1, in_buffer, 16);
	
	for (int i = 1; i < epoch; ++i )
	{
		dohash_inverse_16(buff1, buff2);
		memcpy(buff1, buff2, 16);
	}
	dohash_inverse_32(buff1, buff2, out_buffer_size);
	
	memcpy(out_buffer, buff2, out_buffer_size);
}

int main(int argc, char** argv)
{
#if 1
	unsigned char master_hash[16] = {80, 67, 14, 211, 155, 40, 218, 226, 90, 162, 233, 139, 75, 145, 7, 181};
	char move_buffer[128];
	unsigned int move_buffer_size = 128;
	unsigned char move_buffer_packed[384];
	unsigned int move_buffer_packed_size = 32;
	unsigned int epoch = atoi(argv[1]);
	
	print_buffer(master_hash, 16);
	create_forward_secure_tokens_inverse(master_hash, move_buffer_packed, move_buffer_packed_size, epoch);
	print_buffer(move_buffer_packed, move_buffer_packed_size);
	unpack_moves(move_buffer_packed, move_buffer_packed_size, move_buffer, &move_buffer_size);
	for (int i=0;i<move_buffer_size;i++) cout << move_buffer[i];
	cout << endl;
	
#else
	char move_buffer[128] = {'w','n','s','s','w','s','e','s','s','n','w','n','s','w','n','e','s','e','e','n','e','n','s','e','s','w','w','e','n','n','e','w','w','s','s','e','e','e','s','e','w','w','s','e','s','w','n','w','w','n','n','n','n','n','n','n','w','n','w','w','s','n','e','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n'};
	unsigned int move_buffer_size = 128;
	unsigned char move_buffer_packed[384];
	unsigned int move_buffer_packed_size;
	unsigned char out_buffer[384];
	
	unsigned int epoch = 85;
	
	pack_moves(move_buffer, move_buffer_size, move_buffer_packed, &move_buffer_packed_size);
	 
	print_buffer(move_buffer_packed, move_buffer_packed_size);
	
	create_forward_secure_tokens(move_buffer_packed, move_buffer_packed_size, out_buffer, epoch);
	
	create_forward_secure_tokens_inverse(out_buffer, move_buffer_packed, move_buffer_packed_size, epoch);
	
	print_buffer(move_buffer_packed, move_buffer_packed_size);
	
	memset(move_buffer, 0, 128);
	
	unpack_moves(move_buffer_packed, move_buffer_packed_size, move_buffer, &move_buffer_size);
	
	for (int i=0;i<move_buffer_size;i++) cout << move_buffer[i];
	cout << endl;
#endif

	return 0;
}