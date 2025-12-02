# DVDH Cosmology — Results Folder (v0.1.1)

This directory contains the **illustrative observational outputs** prepared for the DVDH Cosmology Model (v0.1.1). All results here are **mock / demonstrative only**, intended to show the expected structure and format of real MCMC outputs. Full production-level Cobaya+CLASS chains will be included in v0.1.2 and v0.2.0.

---

## 📁 Included Files (v0.1.1)

### 1. `H0_posterior_v2.png`
- Updated mock posterior distribution for the Hubble constant.
- Illustrates expected shape from Pantheon-only constraints.
- Peak location compatible with mild Hubble-tension mitigation.

### 2. `dvdh_corner_v2.png`
- Demonstrative joint-parameter corner plot.
- Shows mock degeneracies among:
    - $H_0$
    - $\Omega_m$
    - $\alpha$
    - $\epsilon$
    - $\Omega_{V,DM}$, $\Omega_{V,L}$, $\Omega_{V,act}$

### 3. `pantheon_mcmc_posteriors_v2.pdf`
- Mock full multipage posterior PDF (1D + 2D contours).
- Represents the structure of the real MCMC output expected from Cobaya + CLASS (Pantheon-only run).

---

## 🧪 Purpose of These Mock Results

These results demonstrate:
- Expected posterior shapes
- Marginal distributions
- Joint parameter degeneracies
- Example likelihood evolution
- Internal structure of DVDH effective components

They serve as a **template** for what the real MCMC pipeline will produce once Planck/BAO likelihoods are applied.

---

## ⚙ MCMC Context (for v0.1.1)

The illustrative plots correspond to a minimal Pantheon-only configuration:

