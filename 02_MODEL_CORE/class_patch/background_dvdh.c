/*===========================================================
    DVDH Cosmology — Background Module (C FILE)
    PSEUDO-IMPLEMENTATION — to be merged with CLASS later
===========================================================*/

#include "background_dvdh.h"
#include <math.h>

/*-----------------------------------------------------------
    MODEL PARAMETERS (to be filled from input.c later)
-----------------------------------------------------------*/
double alpha_DVDH;
double eps_DVDH;
double xiR;
double phi0;
double phidot0;
double M_scale;

/*-----------------------------------------------------------
    SIMPLE MOCK POTENTIAL — replace later with final version
-----------------------------------------------------------*/
double dvdh_V_of_phi(double phi) {
    return 0.5 * M_scale*M_scale * phi * phi;
}

double dvdh_dV_dphi(double phi) {
    return M_scale*M_scale * phi;
}

/*-----------------------------------------------------------
    MOCK Collapse-Geometry (replace by full model)
-----------------------------------------------------------*/
double dvdh_Cgeo(double phi, double phidot, double rho_vx,
                 double H_phys, void *params) {

    return - alpha_DVDH * rho_vx;
}

/*-----------------------------------------------------------
    VX fluid pressure + source
-----------------------------------------------------------*/
double dvdh_P_vx(double phi, double phidot, double rho_vx) {
    return - rho_vx;  /* vacuum-like */
}

double dvdh_S_vx(double phi, double phidot, double rho_vx,
                 void *params) {
    return 0.0;  /* mock: no exchange term */
}

/*-----------------------------------------------------------
    MAIN ODE SYSTEM: y' = f(y, τ)
    y = [phi, phidot, rho_vx]
-----------------------------------------------------------*/
int dvdh_background_derivs(double tau, double *y, double *dy,
                           void *params) {

    double phi     = y[0];
    double phidot  = y[1];
    double rho_vx  = y[2];

    /* --- Scale factor and aH must come from CLASS later --- */
    double a  = 1.0;     /* placeholder */
    double aH = 1e-5;    /* placeholder */

    /* --- Potential --- */
    double V = dvdh_V_of_phi(phi);
    double dVdphi = dvdh_dV_dphi(phi);

    /* --- Mock physical H --- */
    double H_phys = aH / a;

    /* --- Collapse geometry term --- */
    double Cgeo = dvdh_Cgeo(phi, phidot, rho_vx, H_phys, params);

    /*--------------------------------------------
        φ'' equation (conformal time)
    --------------------------------------------*/
    dy[0] = phidot;

    dy[1] = -2.0*aH*phidot - a*a*(dVdphi + Cgeo);

    /*--------------------------------------------
        ρ_VX evolution
    --------------------------------------------*/
    double P_vx = dvdh_P_vx(phi, phidot, rho_vx);
    double S_vx = dvdh_S_vx(phi, phidot, rho_vx, params);

    dy[2] = -3.0*aH*(rho_vx + P_vx) + a * S_vx;

    return 0;
}
