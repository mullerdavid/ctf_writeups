import numpy as np
import matplotlib.pyplot as plt
import scipy

px = 1/plt.rcParams['figure.dpi']
plt.rcParams["figure.figsize"] = [2400*px, 600*px]

dt = np.dtype([('value', np.ubyte)])

data = [np.fromfile(f"dump{i}.bin", dtype=dt) for i in range(1,9) ]

pattern = data[0][4357550:4358150].astype('float') / 255

datanorm = []
datanorm.append( data[0][4345561:12973860] )
datanorm.append( data[1][5684150:14308566] )
datanorm.append( data[2][5683894:14309790] )
datanorm.append( data[3][5700000:14322000] )

for tmp in datanorm:
    data_range = tmp.astype('int')

    mean = np.mean(data_range)

    threshold = 5.3
    window = 150
    operation = (np.std(np.lib.stride_tricks.sliding_window_view(data_range, window),1) > threshold)
    operation_peaks, _ = scipy.signal.find_peaks(operation, distance=400)

    threshold = -12.5
    window = 400
    loop = (np.lib.stride_tricks.sliding_window_view((data_range-mean), window).sum(1) < threshold*window)
    loop_peaks, _ = scipy.signal.find_peaks(loop, distance=400)

    intinfo = np.iinfo(loop_peaks.dtype)
    loop_peaks_ext = np.concatenate( ([intinfo.min], loop_peaks, [intinfo.max]) )

    pattern = []
    pattern_l = []
    pattern_o = []

    index_loop_peak = 0
    for index_opearation_peak in range(len(operation_peaks)):
        index_operation = operation_peaks[index_opearation_peak]
        while index_operation < loop_peaks_ext[index_loop_peak] or loop_peaks_ext[index_loop_peak+1] < index_operation:
            index_loop_peak += 1
        if (index_operation - loop_peaks_ext[index_loop_peak] < 400) or (loop_peaks_ext[index_loop_peak+1] - index_operation < 400):
            pattern.append("L")
            pattern_l.append(index_operation)
        else:
            pattern.append("o")
            pattern_o.append(index_operation)

    pattern.reverse()
    print(''.join(pattern))

    if True:
        plt.plot(loop*0.3, color="C3", lw=1, label="loop")
        plt.plot(operation*0.25, color="C2", lw=1, label="operation")
        plt.plot(pattern_l, [0.35]*len(pattern_l), "d", color="C3")
        plt.plot(pattern_o, [0.35]*len(pattern_o), ".", color="C3")
        plt.plot(data_range/255, color="C1", lw=2, label="orig")
        plt.legend()
        plt.subplots_adjust(left=0, right=1, top=1, bottom=0.1)
        plt.show()
        exit()

