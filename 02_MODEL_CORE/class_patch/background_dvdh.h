/* background_dvdh.h
   DVDH background helper prototypes and parameter struct
*/

#ifndef BACKGROUND_DVDH_H
#define BACKGROUND_DVDH_H

/* parameter container */
typedef struct {
    double alpha;      /* dvdh_alpha */
    double epsilon;    /* dvdh_epsilon */
    double xiR;        /* dvdh_xiR */
    double phi0;       /* dvdh_phi0 */
    double phidot0;    /* dvdh_phidot0 */
    double Mscale;     /* dvdh_Mscale */
    int vx_mode;       /* 0=mock,1=microphysics */
} dvdh_params;

/* helper function prototypes (implement in background_dvdh.c) */
double dvdh_V_of_phi(double phi, const dvdh_params *p);
double dvdh_dV_dphi(double phi, const dvdh_params *p);
double dvdh_P_vx(double phi, double phidot, double rho_vx, const dvdh_params *p);
double dvdh_S_vx(double phi, double phidot, double rho_vx, const dvdh_params *p);
double dvdh_Cgeo(double phi, double phidot, double rho_vx, double a, double H, const dvdh_params *p);

/* background ODE driver to be called from CLASS background_derivs */
int dvdh_background_derivs(double tau, double *y, double *dy, void *params);

#endif /* BACKGROUND_DVDH_H */
