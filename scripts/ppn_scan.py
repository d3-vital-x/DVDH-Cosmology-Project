# scripts/ppn_scan.py -- simple CSV of gamma-1 for a grid of alpha_G, phi0
import numpy as np
import pandas as pd
import os

# ensure output folder exists
os.makedirs('07_RESULTS', exist_ok=True)

# parameter grid (example ranges)
alphas = np.linspace(0,1e-3,101)    # example coupling range
phi0s  = np.linspace(0,1e-4,101)    # example phi0 range

rows = []
for a in alphas:
    for p in phi0s:
        # placeholder symbolic relation (replace with analytic expression later)
        gamma_minus1 = 2 * (a + p*1e-2)**2
        rows.append((a, p, gamma_minus1))

df = pd.DataFrame(rows, columns=['alpha_G', 'phi0', 'gamma_minus1'])
outpath = '07_RESULTS/ppn_scan_example.csv'
df.to_csv(outpath, index=False)
print(f"wrote {outpath}")
