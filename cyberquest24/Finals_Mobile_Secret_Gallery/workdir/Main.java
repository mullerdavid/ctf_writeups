
import java.util.Arrays;
import java.util.Base64;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import java.io.File;

class Main {
	
	private static final byte[] getIV(byte[] bArr) {
        return ArraysKt.copyOfRange(bArr, 0, 16);
    }

    private static final byte[] getEncryptedData(byte[] bArr) {
        return ArraysKt.copyOfRange(bArr, 16, bArr.length);
    }
	
	public static final String decryptFilename(String encryptedFilename) {
		try {
			byte[] bytes = "cyberquest".getBytes();
			byte[] copyOf = Arrays.copyOf(bytes, 16);
			SecretKeySpec secretKeySpec = new SecretKeySpec(copyOf, "AES");
			Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
			byte[] bytes2 = "0123456789ABCDEF".getBytes();
			cipher.init(2, secretKeySpec, new IvParameterSpec(bytes2));
			byte[] doFinal = cipher.doFinal(Base64.getUrlDecoder().decode(encryptedFilename));
			return new String(doFinal);
		} catch(Exception e) {
			return "";
		}
    }
	
    public static void main(String[] args) {
		File dir = new File("./files");
		File[] directoryListing = dir.listFiles();
		if (directoryListing != null) {
			for (File child : directoryListing) {
				System.out.println(child.getName());
				System.out.println(decryptFilename(child.getName()));
			}
		}
   
    }
}

// javac Main.java && java Main