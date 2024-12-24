package hu.honeylab.cyberquest.secretgallery.utils;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.security.MessageDigest;
import java.security.SecureRandom;
import java.util.Arrays;
import java.util.Base64;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import kotlin.Metadata;
import kotlin.collections.ArraysKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;

/* compiled from: EncryptionUtils.kt */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0012\n\u0002\b\r\bÇ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0016\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\b2\u0006\u0010\n\u001a\u00020\u0004J\u000e\u0010\u000b\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\u0004J\u0016\u0010\r\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\b2\u0006\u0010\n\u001a\u00020\u0004J\u000e\u0010\u000e\u001a\u00020\u00042\u0006\u0010\u000f\u001a\u00020\u0004J\b\u0010\u0010\u001a\u00020\bH\u0002J\u0010\u0010\u0011\u001a\u00020\b2\u0006\u0010\u0012\u001a\u00020\bH\u0002J\u0010\u0010\u0013\u001a\u00020\b2\u0006\u0010\u0012\u001a\u00020\bH\u0002J\u000e\u0010\u0014\u001a\u00020\u00042\u0006\u0010\t\u001a\u00020\u0004R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lhu/honeylab/cyberquest/secretgallery/utils/EncryptionUtils;", "", "()V", "AES_MODE", "", "IV_SIZE", "", "decrypt", "", "input", "pin", "decryptFilename", "encryptedFilename", "encrypt", "encryptFilename", "filename", "generateIV", "getEncryptedData", "encrypted", "getIV", "sha1", "app_release"}, k = 1, mv = {1, 9, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
/* loaded from: classes2.dex */
public final class EncryptionUtils {
    public static final int $stable = 0;
    private static final String AES_MODE = "AES/CTR/PKCS5Padding";
    public static final EncryptionUtils INSTANCE = new EncryptionUtils();
    private static final int IV_SIZE = 16;

    private EncryptionUtils() {
    }

    private final byte[] generateIV() {
        byte[] bArr = new byte[16];
        new SecureRandom().nextBytes(bArr);
        return bArr;
    }

    private final byte[] getIV(byte[] bArr) {
        return ArraysKt.copyOfRange(bArr, 0, 16);
    }

    private final byte[] getEncryptedData(byte[] bArr) {
        return ArraysKt.copyOfRange(bArr, 16, bArr.length);
    }

    public final String sha1(String input) {
        Intrinsics.checkNotNullParameter(input, "input");
        MessageDigest messageDigest = MessageDigest.getInstance("SHA-1");
        byte[] bytes = input.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
        byte[] digest = messageDigest.digest(bytes);
        Intrinsics.checkNotNull(digest);
        String str = "";
        for (byte b : digest) {
            StringBuilder append = new StringBuilder().append(str);
            String format = String.format("%02x", Arrays.copyOf(new Object[]{Byte.valueOf(b)}, 1));
            Intrinsics.checkNotNullExpressionValue(format, "format(this, *args)");
            str = append.append(format).toString();
        }
        return str;
    }

    public final byte[] encrypt(byte[] input, String pin) {
        Intrinsics.checkNotNullParameter(input, "input");
        Intrinsics.checkNotNullParameter(pin, "pin");
        String substring = sha1(pin).substring(0, 16);
        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        byte[] bytes = substring.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
        SecretKeySpec secretKeySpec = new SecretKeySpec(bytes, "AES");
        Cipher cipher = Cipher.getInstance(AES_MODE);
        byte[] generateIV = generateIV();
        cipher.init(1, secretKeySpec, new IvParameterSpec(generateIV));
        byte[] doFinal = cipher.doFinal(input);
        Intrinsics.checkNotNull(doFinal);
        return ArraysKt.plus(generateIV, doFinal);
    }

    public final byte[] decrypt(byte[] input, String pin) {
        Intrinsics.checkNotNullParameter(input, "input");
        Intrinsics.checkNotNullParameter(pin, "pin");
        String substring = sha1(pin).substring(0, 16);
        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        byte[] bytes = substring.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
        SecretKeySpec secretKeySpec = new SecretKeySpec(bytes, "AES");
        Cipher cipher = Cipher.getInstance(AES_MODE);
        IvParameterSpec ivParameterSpec = new IvParameterSpec(getIV(input));
        byte[] encryptedData = getEncryptedData(input);
        cipher.init(2, secretKeySpec, ivParameterSpec);
        byte[] doFinal = cipher.doFinal(encryptedData);
        Intrinsics.checkNotNullExpressionValue(doFinal, "doFinal(...)");
        return doFinal;
    }

    public final String encryptFilename(String filename) {
        Intrinsics.checkNotNullParameter(filename, "filename");
        byte[] bytes = "cyberquest".getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
        byte[] copyOf = Arrays.copyOf(bytes, 16);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, newSize)");
        SecretKeySpec secretKeySpec = new SecretKeySpec(copyOf, "AES");
        Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
        byte[] bytes2 = "0123456789ABCDEF".getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes2, "this as java.lang.String).getBytes(charset)");
        cipher.init(1, secretKeySpec, new IvParameterSpec(bytes2));
        byte[] bytes3 = filename.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes3, "this as java.lang.String).getBytes(charset)");
        String encodeToString = Base64.getUrlEncoder().encodeToString(cipher.doFinal(bytes3));
        Intrinsics.checkNotNullExpressionValue(encodeToString, "encodeToString(...)");
        return encodeToString;
    }

    public final String decryptFilename(String encryptedFilename) {
        Intrinsics.checkNotNullParameter(encryptedFilename, "encryptedFilename");
        byte[] bytes = "cyberquest".getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
        byte[] copyOf = Arrays.copyOf(bytes, 16);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, newSize)");
        SecretKeySpec secretKeySpec = new SecretKeySpec(copyOf, "AES");
        Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
        byte[] bytes2 = "0123456789ABCDEF".getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes2, "this as java.lang.String).getBytes(charset)");
        cipher.init(2, secretKeySpec, new IvParameterSpec(bytes2));
        byte[] doFinal = cipher.doFinal(Base64.getUrlDecoder().decode(encryptedFilename));
        Intrinsics.checkNotNullExpressionValue(doFinal, "doFinal(...)");
        return new String(doFinal, Charsets.UTF_8);
    }
}