/* background_dvdh.c
   Pseudo-implementation: DVDH background ODEs for phi and rho_VX
   NOTE: This file is a safe scaffold. When integrating into CLASS,
         replace pseudo functions (get_scale_factor_at_tau, get_aH_at_tau, etc.)
         with CLASS background API calls.
*/

#include "background_dvdh.h"
#include <math.h>
#include <stdlib.h>

#ifndef _SUCCESS_
#define _SUCCESS_ 0
#endif

/* --- model helper implementations (simple mock forms) --- */

double dvdh_V_of_phi(double phi, const dvdh_params *p){
    /* Example: simple massive + quartic + small instability term */
    double mphi = p->Mscale;
    double lambda = 1e-2;
    double Vinst = 0.0; /* placeholder for microphysics part */
    return 0.5 * mphi * mphi * phi * phi + 0.25 * lambda * phi*phi*phi*phi + Vinst;
}

double dvdh_dV_dphi(double phi, const dvdh_params *p){
    double mphi = p->Mscale;
    double lambda = 1e-2;
    double dVinst = 0.0;
    return mphi*mphi*phi + lambda*phi*phi*phi + dVinst;
}

double dvdh_P_vx(double phi, double phidot, double rho_vx, const dvdh_params *p){
    /* Mock effective pressure: treat VX approx. as fluid with w ~ -1 + small */
    double w_eff = -0.95;
    return w_eff * rho_vx;
}

double dvdh_S_vx(double phi, double phidot, double rho_vx, const dvdh_params *p){
    /* Mock source term for ρ_VX — here zero for conservative placeholder */
    return 0.0;
}

double dvdh_Cgeo(double phi, double phidot, double rho_vx, double a, double H, const dvdh_params *p){
    /* Mock collapse-geometry coupling: simple α * phi dependent */
    return - p->alpha * phi;
}

/* ----------------- Main ODE driver ----------------- */
/* y: [0]=phi, [1]=phidot (dφ/dτ), [2]=rho_vx */
int dvdh_background_derivs(double tau, double *y, double *dy, void *params){
    dvdh_params *p = (dvdh_params*) params;

    double phi = y[0];
    double phidot = y[1];
    double rho_vx = y[2];

    /* Pseudo-get a and aH from external environment: replace in CLASS */
    double a = 1.0;      /* placeholder: CLASS will provide */
    double aH = 0.0;     /* placeholder: CLASS will provide (a * H) */

    /* Potential and derivative */
    double V = dvdh_V_of_phi(phi, p);
    double dVdphi = dvdh_dV_dphi(phi, p);

    /* Collapse geometry coupling */
    double Cgeo = dvdh_Cgeo(phi, phidot, rho_vx, a, /*H=*/ (aH/a), p);

    /* Equations in conformal time (example form) */
    dy[0] = phidot;
    dy[1] = -2.0 * aH * phidot - a*a * dVdphi - a*a * Cgeo;

    /* rho_VX evolution (conformal-time form): dρ/dτ = -3 aH (ρ + P) + a * S */
    double P_vx = dvdh_P_vx(phi, phidot, rho_vx, p);
    double S_vx = dvdh_S_vx(phi, phidot, rho_vx, p);

    dy[2] = -3.0 * aH * (rho_vx + P_vx) + a * S_vx;

    return _SUCCESS_;
}
