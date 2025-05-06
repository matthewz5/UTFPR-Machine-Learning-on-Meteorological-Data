# Prediction of solar radiation by Time Series

This repository contains the resources and code for analyzing and predicting solar irradiation data using time series methods, with a focus on Artificial Neural Networks (ANNs).

The study compares two neural network topologies: **Time Delay Neural Network (TDNN)** and **Nonlinear Auto-Regressive with eXogenous inputs (NARX)**, referred to as TDNNm.

**Nutshell Link:** [Prediction of solar radiation by Time Series](article_TS_solution_solar_irradiation.pdf)

## Project Overview

- **Objective**: To predict short-term solar irradiation using historical data and compare the performance of two ANN topologies:
  - **TDNN**: Uses delayed historical data for predictions.
  - **TDNNm**: Includes feedback from previous predicted values, enhancing robustness and accuracy.

## Methodology

1. **Data Preparation**
   - Historical hourly solar irradiation data (2010–2021) from 12 meteorological stations near Cornélio Procópio, Paraná.
   - Training: June 2016 (winter month).
   - Testing: First 15 days of July 2016.
2. **Model Training and Comparison**
   - Performance measured by Mean Squared Error (MSE), Mean Relative Error (MRE), variance, and epochs for convergence.
  
## Highlights of Results

1. **TDNN**:
   - Best configuration: 3-day delayed inputs (72 samples).
   - Lower variance in daily predictions compared to other configurations.
2. **TDNNm**:
   - Best configuration: 1-day delayed inputs (24 samples) with 6 feedback outputs.
   - Superior accuracy with fewer epochs and lower MRE.

**Key Insight**: TDNNm outperformed TDNN, demonstrating higher robustness and precision with fewer training epochs.