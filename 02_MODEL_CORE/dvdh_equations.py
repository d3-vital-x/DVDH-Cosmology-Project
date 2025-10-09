# 02_MODEL_CORE/dvdh_equations.py

import numpy as np
from scipy.integrate import quad
# Note: For production MCMC, a pre-computed interpolation grid is used for speed.
# This implementation uses scipy.quad for accuracy and conceptual clarity.

# Constants
c_km_s = 299792.458 
Omega_r_baseline = 9.2e-5 # Radiation density parameter

def H_DVDH_E2(z, H0, Omega_m, Omega_VX, alpha, epsilon):
    """
    Computes E^2(z) = H^2(z) / H0^2 for the DVDH model.
    """
    
    # Calculate Curvature Density (Omega_k)
    Omega_k = 1.0 - Omega_m - Omega_r_baseline - Omega_VX
    
    # Calculate the DVDH correction function f_VX(z)
    f_VX = (1.0 + z)**(3.0 * (1.0 + alpha)) * np.exp(-epsilon * z)
    
    # Calculate E^2(z)
    E2 = (Omega_r_baseline * (1.0 + z)**4) + \
         (Omega_m * (1.0 + z)**3) + \
         (Omega_k * (1.0 + z)**2) + \
         (Omega_VX * f_VX)
         
    return E2

def mu_DVDH(z_data, H0, Omega_m, Omega_VX, alpha, epsilon):
    """
    Computes the Distance Modulus mu(z) by integrating 1/E(z).
    """
    
    # Define the integrand function 1/E(z)
    def inv_E(zp):
        E2 = H_DVDH_E2(zp, H0, Omega_m, Omega_VX, alpha, epsilon)
        # Handle non-physical parameter sets by returning infinity (low log-likelihood)
        if E2 <= 0.0:
            return np.inf 
        return 1.0 / np.sqrt(E2)

    # Calculate Comoving Distance (D_C) via numerical integration (quad)
    D_C_integrals = np.array([quad(inv_E, 0, zi)[0] for zi in z_data])
    D_C = (c_km_s / H0) * D_C_integrals # in Mpc
    
    # Calculate Luminosity Distance (D_L)
    D_L = (1.0 + z_data) * D_C 
    
    # Calculate Distance Modulus (mu)
    mu = 5.0 * np.log10(D_L) + 25.0
    
    return mu
