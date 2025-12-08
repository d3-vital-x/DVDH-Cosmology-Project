## How to run the DVDH background demo (example)

1. Ensure you have CLASS installed locally (class_public).
2. Copy `configs/dvdh.ini` into your CLASS working folder (or point to it).
3. Apply the CLASS patch (if you used the background_dvdh module) or include background_dvdh.c into CLASS source and recompile:
   - patch method: apply `04_CLASS_MODULE/CLASS_dvdh_patch.diff` (if present)
   - otherwise add the provided files into CLASS source and `make`
4. Run background-only:
   ./class dvdh.ini
5. Output will appear in `output/dvdh/` (look for background quantities: a, phi(a), rho_VX(a), etc.)
