import numpy as np
import matplotlib.pyplot as plt

px = 1/plt.rcParams['figure.dpi']
plt.rcParams["figure.figsize"] = [2500*px, 400*px]

dt = np.dtype([('value', np.ubyte)])

data = [np.fromfile(f"dump{i}.bin", dtype=dt) for i in range(1,9) ]

datanorm = []
datanorm.append( data[0][4345561:12975247] )
datanorm.append( data[1][5684150:14308566] )
datanorm.append( data[2][5683894:14309790] )
datanorm.append( data[3][5700000:14322000] )

plt.plot(datanorm[0], label = "dump 1")
plt.plot(datanorm[1], label = "dump 2")
plt.plot(datanorm[2], label = "dump 3")
plt.plot(datanorm[3], label = "dump 4")
plt.subplots_adjust(left=0, right=1, top=1, bottom=0.1)
plt.show()