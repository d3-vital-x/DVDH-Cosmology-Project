# DVDH Cosmology — Results Folder (v0.1.1)

This directory contains **illustrative (mock) observational outputs** for the DVDH
Cosmology Model.  
These are placeholders showing the expected structure of real MCMC results.

Included files:

- `H0_posterior.png`
- `dvdh_corner.png`
- `pantheon_mcmc_posteriors.pdf`

These figures demonstrate:

- H₀ marginal posterior behaviour  
- joint parameter constraints (corner plot)  
- sample Pantheon likelihood evolution  

They will be replaced with full Cobaya+CLASS runs (Planck+BAO+Pantheon)
in future releases (v0.1.2 and v0.2.0).

## Microphysics & parameter mapping
The microscopic derivation of the cosmological parameters (α, ϵ) used in our illustrative MCMC results is described in the DSI simulation repository: https://github.com/d3-vital-x/DVDH-DSI-Simulation
The DSI repo contains simulation code (01_SIM_CORE/dsi_solver.py) and the coupling analysis used to map microphysics→cosmology.
