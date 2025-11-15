# DVDH Dataset Documentation

This directory contains the datasets used for validating the  
Dark Vital Dimensional Hypothesis (DVDH) model and running the  
Dimensional Stability Integrator (DSI) and MCMC simulations.

---

## 1. NASA / EHT Observational Data

Location:
    /data/NASA_EHT_Data/

Contents:
- Black Hole Shadow Radius (EHT Collaboration)
- Galactic luminosity-distance datasets
- Solar resonance signal maps
- Processed spectral curves and redshift measurements

All files follow the original licensing terms:
- NASA Data → Public Domain
- EHT Data → CC-BY 4.0 (citation required)

---

## 2. Mass Cancellation MCMC Outputs

Location:
    /data/Mass_Cancellation_MCMC_Output/

Contents:
- mcmc_chain_raw.h5     (raw chain)
- mcmc_processed.npz    (cleaned samples)
- results_summary.csv   (posterior medians & CI)
- corner_plot.png       (posterior visualization)

These files verify the equation:
    M_total -> 0   (within numerical precision)

---

## 3. Resonance Maps

Location:
    /data/Resonance_Maps/

Includes:
- synthetic and real resonance maps R(x)
- grid-aligned chamber scans
- datasets for RGF-X calibration

---

## 4. Preprocessing Notes

- All datasets normalized to (0,1)
- Outliers removed using MAD filtering
- SI units standardization applied
- Chains stored in HDF5 format

---

## 5. Contact

For access to larger raw datasets:
Contact the D³ VITAL-X Research Initiative.
