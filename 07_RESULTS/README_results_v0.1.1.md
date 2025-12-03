# DVDH Cosmology — Results Folder (v0.1.1)

This directory contains the **illustrative observational outputs** prepared for  
the DVDH Cosmology Model (v0.1.1).  
All results here are **mock / demonstrative only**, intended to show the expected  
structure and format of real MCMC outputs.  
Full production-level Cobaya+CLASS chains will be included in v0.1.2 and v0.2.0.

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
- Represents the structure of the real MCMC output expected from  
  Cobaya + CLASS (Pantheon-only run).

---

## 🧪 Purpose of These Mock Results

These results demonstrate:

- Expected posterior shapes  
- Marginal distributions  
- Joint parameter degeneracies  
- Example likelihood evolution  
- Internal structure of DVDH effective components  

They serve as a **template** for what the real MCMC pipeline will produce  
once Planck/BAO likelihoods are applied.

---

## ⚙ MCMC Context (for v0.1.1)

The illustrative plots correspond to a minimal Pantheon-only configuration:

```
niter = 15000
burn_in = 3000
proposal_scale = 0.8
```

Varied parameters included:

- $H_0$
- $\Omega_m$
- $\alpha$
- $\epsilon$
- $\Omega_{V,DM}$
- $\Omega_{V,L}$
- $\Omega_{V,act}$

Transition parameters (e.g., $z_{t2}$, $n$, $z_{act}$) were kept  
broad and uninformative.

---

## 📌 Notes for Users

- These plots are **not real observational constraints**.  
- They are provided only as a **scaffold** for structure, formatting, and expected output.  
- They validate that the DVDH pipeline runs properly and can generate  
  scientific figures.

---

## 🔭 Future Updates

### Coming in **v0.1.2**
- Full Pantheon-only MCMC chains  
- Updated corner plots  
- Revised posterior tables  

### Coming in **v0.2.0**
- Full Planck + BAO + Pantheon joint-likelihood run  
- Production-grade DVDH cosmological parameter constraints  
- AIC/BIC model selection validated with real data  

---

## 📜 Citation

If using this results folder in a manuscript or Zenodo deposit:

> **"DVDH Cosmology — Illustrative MCMC Results, v0.1.1 (Scaffold Release)"**  
> Md. Rabiul Islam (R. Islam), Team D³ VITAL-X, 2025.

---

## 🛡 License

These mock results are released under the **MIT License**,  
following the main repository.

---

**“Transforming Theories, Illuminating Singularities.”**
