import numpy as np
import matplotlib.pyplot as plt

# Load waveform CSV
data = np.loadtxt("waveform.csv", delimiter=",")

t = data[:,0]
amp = data[:,1]

plt.plot(t, amp)
plt.xlabel("Time (s)")
plt.ylabel("Amplitude")
plt.title("Seismic Waveform")
plt.grid(True)
plt.savefig("waveform_plot.png", dpi=300)

print("[OK] Saved waveform_plot.png")
