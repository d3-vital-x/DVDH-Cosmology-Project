# 03_MCMC_ANALYSIS/log_likelihood.py

import numpy as np
# Import the model function from the core directory
# Note: This will be run after you place the dvdh_equations.py file next to it locally.
# Assuming relative import works after the local setup.
from dvdh_equations import mu_DVDH

# --- 1. LOG PRIOR FUNCTION ---
def log_prior(theta):
    """
    Uniform prior defined by the ranges in Chapter 3.
    theta = {H0, Omega_m, Omega_VX, alpha, epsilon}
    """
    H0, Om, OVX, alpha, eps = theta
    
    # Check bounds (as defined in your README)
    if not (65.0 < H0 < 75.0): return -np.inf
    if not (0.2 < Om < 0.4): return -np.inf
    if not (0.5 < OVX < 0.8): return -np.inf
    if not (-0.5 < alpha < 0.5): return -np.inf
    if not (0.0 <= eps <= 0.5): return -np.inf
    
    return 0.0 # Uniform prior (ln(constant))

# --- 2. LOG LIKELIHOOD FUNCTION ---
def log_likelihood(theta, z_data, mu_obs, Cinv):
    """
    Log-likelihood using the full inverse covariance matrix (Cinv).
    ln(L) = -1/2 * (Delta_mu)^T * Cinv * (Delta_mu)
    """
    
    # The MCMC sampler will pass the full theta vector
    try:
        # Compute model mu vector
        mu_model = mu_DVDH(z_data, *theta)
    except:
        # If integration fails (e.g., non-physical E^2), return very low likelihood
        return -np.inf

    diff = mu_obs - mu_model # Delta_mu vector
    
    # Chi2 = diff^T @ Cinv @ diff
    chi2 = float(diff @ (Cinv @ diff))
    
    return -0.5 * chi2

# --- 3. LOG POSTERIOR FUNCTION ---
def log_posterior(theta, z_data, mu_obs, Cinv):
    """
    Posterior = Prior + Likelihood
    """
    lp = log_prior(theta)
    
    # If prior is rejected, return -inf immediately
    if not np.isfinite(lp):
        return -np.inf
        
    return lp + log_likelihood(theta, z_data, mu_obs, Cinv)
