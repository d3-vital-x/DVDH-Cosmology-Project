#ifndef _BACKGROUND_DVDH_
#define _BACKGROUND_DVDH_

/*===========================================================
    DVDH Cosmology — Background Module (HEADER)
    This header declares all helper functions and prototypes
    used by background_dvdh.c
===========================================================*/

double dvdh_V_of_phi(double phi);
double dvdh_dV_dphi(double phi);

double dvdh_Cgeo(double phi, double phidot, double rho_vx,
                 double H_phys, void *params);

double dvdh_P_vx(double phi, double phidot, double rho_vx);
double dvdh_S_vx(double phi, double phidot, double rho_vx,
                 void *params);

int dvdh_background_derivs(double tau, double *y, double *dy,
                           void *params);

#endif
