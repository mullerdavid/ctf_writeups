import wave
import struct

def extract_samples(input_wav, offset_seconds, duration_seconds):
    with wave.open(input_wav, 'rb') as wav_in:
        framerate = wav_in.getframerate()
        channels = wav_in.getnchannels()
        sampwidth = wav_in.getsampwidth()
        total_frames = wav_in.getnframes()

        start_frame = int(offset_seconds * framerate)
        frames_to_read = int(duration_seconds * framerate)

        if start_frame > total_frames:
            raise ValueError("Offset exceeds audio length")

        # Adjust frames_to_read if it goes beyond file length
        if start_frame + frames_to_read > total_frames:
            frames_to_read = total_frames - start_frame

        wav_in.setpos(start_frame)
        raw_data = wav_in.readframes(frames_to_read)

        if sampwidth == 1:
            fmt = f"{frames_to_read * channels}B"  # 8-bit unsigned
        elif sampwidth == 2:
            fmt = f"{frames_to_read * channels}h"  # 16-bit signed
        else:
            raise ValueError("Unsupported sample width")

        samples = struct.unpack(fmt, raw_data)

        channels_data = [[] for _ in range(channels)]
        for i, sample in enumerate(samples):
            channels_data[i % channels].append(sample)

        return channels_data

if __name__ == "__main__":
    import sys

    input_file = "record.wav"
    offset_sec = 60
    duration_sec = 1

    channels = extract_samples(input_file, offset_sec, duration_sec)
    for idx, ch_data in enumerate(channels, 1):
        print(f"Channel {idx}: {len(ch_data)} samples")
    bitstream = []
    for bits in zip(channels[0], channels[1]):
        bitstream.extend(bits)
    lsb = [d & 1 for d in bitstream]
    bytes_out = []
    for i in range(0, 1024 , 8): #len(lsb)
        byte_bits = lsb[i:i+8]
        if len(byte_bits) < 8:
            break
        byte = 0
        for b in byte_bits:
            byte = (byte << 1) | b
        bytes_out.append(byte)
    bytes_out = bytes(bytes_out)
    print(bytes_out)
    print(bytes_out.decode())
