/*
SET DOTNET_PATH=c:\Windows\Microsoft.NET\Framework\v4.0.30319\
%DOTNET_PATH%csc.exe /optimize /out:BruteDecryptor.exe BruteDecryptor.cs
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Security.Cryptography;
using System.Text;

namespace BruteDecryptor
{
    internal class BruteDecryptor
    {
        private static byte[] GetRandKey256(int tick)
        {
            Random rnd = new Random(tick);
            byte[] buff = new byte[32];
            rnd.NextBytes(buff);
            return buff;
        }

        static bool TryDecrypt(byte[] firstblock, byte[] perFileKey)
        {
            byte[] data = firstblock;
            byte[] iv = new byte[16];
            //Array.Copy(perFileKey, iv, iv.Length);
            Array.Clear(iv, 0, iv.Length);

            try
            {
                using (Aes aesAlg = Aes.Create())
                {
                    aesAlg.Key = perFileKey;
                    aesAlg.IV = iv;
                    aesAlg.Padding = PaddingMode.None;

                    ICryptoTransform decryptor = aesAlg.CreateDecryptor();
                    using (MemoryStream msEncrypt = new MemoryStream())
                    {
                        using (CryptoStream csEncrypt = new CryptoStream(msEncrypt, decryptor, CryptoStreamMode.Write))
                        {
                            csEncrypt.Write(data, 0, data.Length);
                        }
                        byte[] data_new = msEncrypt.ToArray();
                        Debug.Assert(data.Length == data_new.Length);
                        data = data_new;
                    }
                    return data[0] == 0x89 && data[1] == 0x50 && data[2] == 0x4E && data[3] == 0x47; // %PNG header
                }
            }
            catch (Exception)
            {
                return false;
            }
        }
        public static bool CompareBytearrays(byte[] a, byte[] b)
        {
            if (a.Length != b.Length)
                return false;
            int i = 0;
            foreach (byte c in a)
            {
                if (c != b[i])
                    return false;
                i++;
            }
            return true;
        }

        static void Decrypt(Stream stream, byte[] perFileKey)
        {
            byte[] needle = Encoding.ASCII.GetBytes("RansomWareMetaData");
            byte[] buff = new byte[needle.Length];
            int i = needle.Length + 1;
            while (i < stream.Length)
            {
                stream.Seek(-i, SeekOrigin.End);
                i++;
                stream.Read(buff, 0, buff.Length);
                if (CompareBytearrays(needle, buff))
                {
                    stream.Seek(-i, SeekOrigin.End);
                    break;
                }
            }

            try
            {
                string strkey = BitConverter.ToString(perFileKey).Replace("-", "").ToLower();
                string msg = String.Format("Decrypting ({0})", strkey);
                Debug.WriteLine(msg);
                Console.WriteLine(msg);

                byte[] iv = new byte[16];
                //Array.Copy(perFileKey, iv, iv.Length);
                Array.Clear(iv, 0, iv.Length);

                using (Aes aesAlg = Aes.Create())
                {
                    aesAlg.Key = perFileKey;
                    aesAlg.IV = iv;
                    aesAlg.Padding = PaddingMode.None;

                    long originalsize = stream.Position + 1;
                    long len = Math.Min(originalsize, 4 * 1024 * 1024);
                    len = len - len % aesAlg.BlockSize;
                    byte[] data = new byte[len];
                    stream.Seek(0, SeekOrigin.Begin);
                    stream.Read(data, 0, data.Length);
                    stream.Seek(-data.Length, SeekOrigin.Current);
                    ICryptoTransform decryptor = aesAlg.CreateDecryptor();
                    using (MemoryStream msEncrypt = new MemoryStream())
                    {
                        using (CryptoStream csEncrypt = new CryptoStream(msEncrypt, decryptor, CryptoStreamMode.Write))
                        {
                            csEncrypt.Write(data, 0, data.Length);
                        }
                        byte[] data_new = msEncrypt.ToArray();
                        Debug.Assert(data.Length == data_new.Length);
                        data = data_new;
                    }
                    stream.Write(data, 0, data.Length);
                    stream.SetLength(originalsize);
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
        }

        static void Main(string[] args)
        {
            string filePath = args[0];
            int approxTick = Int32.Parse(args[1]);
            int range = 200000;


            using (FileStream fileStream = new FileStream(filePath, FileMode.Open, FileAccess.ReadWrite))
            {
                byte[] firstBlock = new byte[16];
                fileStream.Read(firstBlock, 0, firstBlock.Length);
                for (int i = -range; i < range; i++)
                {
                    int tick = approxTick + i;
                    byte[] key = GetRandKey256(tick);
                    if (TryDecrypt(firstBlock, key))
                    {
                        string strkey = BitConverter.ToString(key).Replace("-", "").ToLower();
                        //Debug.WriteLine(strkey);
                        //Console.WriteLine(strkey);
                        Decrypt(fileStream, key);
                        break;
                    }
                }
            }
        }
    }
}
