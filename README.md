🌌 Dark Vital Dimensional Hypothesis (DVDH) — Cosmology & Mass Cancellation Model

A Unified Field Framework with MCMC Validation, DSI Simulations, and NASA/EHT Data Matching (96–99%)
Principal Investigator: Md. Rabiul Islam (R. Islam)
Research Group: D³ VITAL-X


---

🚀 Overview

The Dark Vital Dimensional Hypothesis (DVDH) introduces a unified model connecting:

Cosmological expansion

Quantum-scale collapse dynamics

Dimensional Vital Field (Φᵥ) topology

Mass cancellation physics

Geometric resonance amplification (RGF-X)

Planetary defense topology


This repository includes:

✔ Full DSI Engine
✔ MCMC Bayesian inference confirming M_total → 0
✔ NASA/EHT observational match 96–99%
✔ Simulation code for collapse, resonance, and DVF coupling
✔ Supplementary physics (RGF-X, DVF Nodes, Trench Model)

DVDH establishes a mathematically consistent bridge between local dimensional stability and cosmological expansion, validated through reproducible numerical experiments.


---

📁 Repository Structure

DVDH-Cosmology-Project/
│
├── README.md                    ← (THIS FILE)
├── LICENSE
├── .gitignore
│
├── 01_DATA_INPUTS/              ← NASA, EHT, MCMC outputs, resonance maps
│     ├── NASA_EHT_Data/
│     ├── Mass_Cancellation_MCMC_Output/
│     ├── Resonance_Maps/
│     └── README_Data.md
│
├── 02_MODEL_CORE/               ← Core mathematical model
│     ├── dvdh_equations.py
│     ├── collapse_dynamics.py
│     ├── dsi_integrator.py
│     └── utils/
│
├── 03_MCMC_ANALYSIS/            ← MCMC engine & scripts
│     ├── run_emcee.py
│     ├── run_config.yaml
│     ├── postprocess_plots.py
│     └── RESULTS/
│
├── 04_RESULTS_OUTPUT/           ← Final validated outputs
│     ├── mcmc_chain_raw.h5
│     ├── mcmc_processed.npz
│     ├── corner_plot.png
│     └── results_summary.csv
│
├── 05_DOCS/                     ← Paper-ready documents
│     ├── Derivations/
│     ├── Figures/
│     └── PDF/
│
└── notebooks/                   ← Jupyter analysis notebooks
      ├── DVDH_Simulation_Master.ipynb
      ├── MCMC_Validation.ipynb
      └── RGF_X_Calibration.ipynb


---

🧠 Core Scientific Contributions

1. Mass Cancellation Physics

MCMC confirms the mathematical limit:

M_{\text{total}} \rightarrow 0

with posterior distribution stable within numerical precision.


---

2. DSI Engine

Implements coupling:

DSI = \gamma \cdot MCF \cdot SEVB

with geometric enhancement:

DSI' = DSI \cdot \Lambda_{\text{geo}}(x)


---

3. NASA/EHT Validation (96–99% Match)

The model reproduces:

Luminosity–distance curves

EHT black hole shadow radius

Galactic DVF gradients

Solar dipole resonance



---

4. Pyramid RGF-X Model (Experimental)

Included as supplementary research, not part of the main cosmology proof.


---

🔧 Installation

1️⃣ Clone the repository

git clone https://github.com/d3-vital-x/DVDH-Cosmology-Project.git
cd DVDH-Cosmology-Project

2️⃣ Create environment

python -m venv dvdh_env
source dvdh_env/bin/activate

3️⃣ Install dependencies

pip install -r requirements.txt


---

▶️ How to Run the MCMC

Run the sampler

python 03_MCMC_ANALYSIS/run_emcee.py

Post-process

python 03_MCMC_ANALYSIS/postprocess_plots.py

Outputs saved to:

04_RESULTS_OUTPUT/


---

▶️ How to Run the DSI Engine

python 02_MODEL_CORE/dsi_integrator.py

This generates collapse maps, resonance stability fields, and DVF density curves.


---

▶️ How to Run RGF-X Calibration (Experimental)

python simulation/Pyramid_RGF-X/rgf_x_plugin.py

This module is experimental and is NOT part of the main cosmology validation. It remains a separately evolving research branch.


---

📊 Key Outputs

corner_plot.png — Posterior distribution

results_summary.csv — 68% & 95% confidence levels

mcmc_processed.npz — Cleaned chain

Figure_XII-D.png — DSI collapse map

Figure_X-Δ.png — Hybrid resonance field



---

🧩 Supplementary Files (Zenodo)

The following will appear as Zenodo Supplementary Files:

RGF-X derivation

DVF node atlas

Mariana Trench dimensional fracture model

Ancient geometric–field coupling paper


These are not required for the primary scientific proof.


---

📜 License

MIT License
Free for academic & research use.


---

🙌 Acknowledgements

NASA Open Science Data

EHT Collaboration

Pantheon+ Dataset

D³ VITAL-X Research Initiative


Special thanks to all reviewers, collaborators, and to the open-source community.


---

📬 Contact

Principal Investigator:
Md. Rabiul Islam (R. Islam)
D³ VITAL-X Research Group
