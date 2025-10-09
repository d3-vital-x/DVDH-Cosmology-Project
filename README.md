# DVDH-Cosmology-Project  
**MCMC Cosmological Analysis for the Dark Vital Dimensional Hypothesis (𝘋𝘝𝘋𝘏)**  
Constraining a dynamic dark energy model using the Pantheon+ Supernova dataset.

---

## 🔭 Project Overview

The **Dark Vital Dimensional Hypothesis (𝘋𝘝𝘋𝘏)** introduces a dynamic modification to the standard ΛCDM framework through a *vital dimensional field* Ψ.  
This project develops a full cosmological pipeline to test DVDH against observational data, focusing on the **H₀ tension** between Planck and SH0ES measurements.

**Core Objective:**  
Perform Bayesian parameter estimation using MCMC (via `emcee`) to constrain the parameters:  
\[
\theta = \{H_0,\ \Omega_m,\ \Omega_{VX},\ \alpha,\ \epsilon\}
\]

---

## 🧪 Key Scientific Motivation

| Issue | How DVDH Addresses It |
| :--- | :--- |
| **Hubble Tension (H₀)** | Introduces a dynamic vitality term \( \rho_{VX} \) |
| **ΛCDM Limitation** | Extends ΛCDM via \( f_{VX}(z;\alpha,\epsilon) \) |
| **Cosmic Acceleration** | Links expansion to vital dimensional coupling \( \Psi(d) \) |

The modified Friedmann equation driving the model is:
\[
H^2(z) = H_0^2 \left[\Omega_m(1+z)^3 + \Omega_r(1+z)^4 + \Omega_{VX} f_{VX}(z; \alpha,\epsilon)\right]
\]
with:
\[
f_{VX}(z) = (1+z)^{3(1+\alpha)} \, e^{-\epsilon z}
\]

---

## 🗂 Project Structure (Code & Data)

| Folder | Purpose |
| :--- | :--- |
| `01_DATA_INPUTS/` | Pantheon+SH0ES μ-data & C⁻¹ covariance matrix |
| `02_MODEL_CORE/` | DVDH equations, baseline ΛCDM, cosmology functions |
| `03_MCMC_ANALYSIS/` | `emcee` sampler, log-likelihood, priors |
| `04_RESULTS_OUTPUT/` | Chains, corner plots, residuals, χ² tables |
| `05_DOCS/` | Manuscript drafts, appendices, model derivations |

---

## 🎯 MCMC Parameter Set & Priors

| Parameter | Meaning | Prior Range |
| :---: | :--- | :---: |
| \( H_0 \) | Hubble Constant | [65, 75] |
| \( \Omega_m \) | Matter Density | [0.2, 0.4] |
| \( \Omega_{VX} \) | Vital Energy Density | [0.5, 0.8] |
| \( \alpha \) | Dimensional Index | [-0.5, 0.5] |
| \( \epsilon \) | Vital Decay Factor | [0.0, 0.5] |

**Statistical Model:**  
\[
\ln \mathcal{L}(\theta) = -\frac{1}{2} (\Delta\mu)^T C^{-1} (\Delta\mu)
\]

---

## 🚀 How to Run (Analysis Pipeline)

```bash
# 1️⃣ Precompute DVDH grid (if used)
python 02_MODEL_CORE/dvdh_grid_generator.py

# 2️⃣ Run MCMC (Pantheon+ constraints)
python 03_MCMC_ANALYSIS/mcmc_dvdh_run.py

# 3️⃣ Post-process & Visualization
python 03_MCMC_ANALYSIS/postprocess_plots.py


---

📊 Outputs & Visualization (Chapter 4)

Output	Description

Corner_Plot_*.png	Posterior distributions & correlations
DVDH_vs_LCDM_residuals.png	μ-residuals vs Pantheon+
results_summary.csv	Best-fit parameters, χ², AIC/BIC
mcmc_traces.png	Convergence diagnostics



---

🧭 Scientific Impact: H₀ Tension Resolution

This project evaluates whether DVDH:

Shifts ( H_0 ) toward SH0ES local value (~73 km/s/Mpc)

Improves fit over ΛCDM via Δχ², AIC, BIC

Supports a new class of dark vitality cosmologies



---

📎 Requirements

numpy
scipy
matplotlib
emcee
corner


---

📜 License

MIT License – Open for research and collaboration.
For collaboration or validation results, contact via GitHub Discussions.


---

“Transforming Cosmology through Vital Dimensions.”
DVDH Collaboration – 2025

---
