from collections import defaultdict, Counter
import numpy as np

f = open("times.txt")
d = f.read()

deltas = defaultdict(list)
for line in d.splitlines():
    index, times = line.split(": ")
    index = int(index)

    times = list(map(int, times.split(" ")))
    for i in range(1, len(times)):
        deltas[index].append(times[i] - times[i-1])

maxes = []
averages = []
bin_size = 16
maxes_binned = [0 for _ in range(1024 // bin_size)]
averages_binned = [[] for _ in range(1024 // bin_size)]
used_bin = [False for _ in range(1024 // bin_size)]
keys = []
for key in deltas.keys():
    # print(key, max(deltas[key]))
    maxes.append(max(deltas[key]))
    averages.append(np.mean(deltas[key]))

    maxes_binned[key // bin_size] = max(maxes_binned[key // bin_size], max(deltas[key]))
    averages_binned[key // bin_size].append(np.mean(deltas[key]))
    used_bin[key // bin_size] = True

    keys.append(key)

averages_binned = [np.mean(x) if len(x) else 0 for x in averages_binned]

import matplotlib.pyplot as plt

plt.rc('axes', titlesize=10)
fig, ax = plt.subplots(2, 1, tight_layout=True, figsize=[12.0, 6.0])
xticks = range(0, 1025, 64)

# ax[0].bar(keys, maxes)
ax[0].bar(list(range(0, 1024, bin_size)), maxes_binned, width=bin_size, align="edge")
ax[0].set_title("Maximum time between operations")
ax[0].set_xlabel("Memory location")
ax[0].set_ylabel("Clock cycles")
ax[0].grid(True, axis='y')
ax[0].set_xticks(xticks)
ax[0].set_xlim(0, 1024)
ax[0].set_yscale("log")

# ax[1].bar(keys, averages)
ax[1].bar(list(range(0, 1024, bin_size)), averages_binned, width=bin_size, align="edge")
ax[1].set_title("Average time between operations")
ax[1].set_xlabel("Memory location")
ax[1].set_ylabel("Clock cycles")
ax[1].grid(True, axis='y')
ax[1].set_xticks(xticks)
ax[1].set_xlim(0, 1024)
ax[1].set_yscale("log")

fig.suptitle(f"Memory operations by CoreMark benchmark (bins of {bin_size} words)")
fig.savefig("times.pdf")
