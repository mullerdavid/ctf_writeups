import numpy as np
import matplotlib.pyplot as plt
import scipy

px = 1/plt.rcParams['figure.dpi']
plt.rcParams["figure.figsize"] = [2400*px, 600*px]

dt = np.dtype([('value', np.ubyte)])

data = [np.fromfile(f"dump{i}.bin", dtype=dt) for i in range(1,9) ]

pattern = data[0][4357550:4358150].astype('float') / 255
data_range = data[0][4345561:12973860].astype('int')

mean = np.mean(data_range)

threshold = 5.3
window = 150
operation = (np.std(np.lib.stride_tricks.sliding_window_view(data_range, window),1) > threshold)

operation_peaks, _ = scipy.signal.find_peaks(operation, distance=400)

threshold = -12.5
window = 400
loop = (np.lib.stride_tricks.sliding_window_view((data_range-mean), window).sum(1) < threshold*window)

loop_peaks, _ = scipy.signal.find_peaks(loop, distance=400)

if True:
    plt.plot(loop*0.3, color="C3", lw=1, label="loop")
    plt.plot(operation*0.25, color="C2", lw=1, label="operation")
    plt.plot(loop_peaks, loop[loop_peaks]*0.32, "x", color="C3")
    plt.plot(operation_peaks, operation[operation_peaks]*0.27, "x", color="C2")
    plt.plot(data_range/255, color="C1", lw=2, label="orig")
    plt.legend()
    plt.subplots_adjust(left=0, right=1, top=1, bottom=0.1)
    plt.show()
    exit()
