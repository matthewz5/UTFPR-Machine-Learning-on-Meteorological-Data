# 🌞 Solar Irradiation Estimation Using Machine Learning Models

This repository contains the implementation and results of a study comparing **Specific** and **Generalist Multi-Layer Perceptron (MLP)** models for estimating daily solar irradiation in Cornélio Procópio, Paraná, Brazil. The study aimed to improve the accuracy of solar irradiation predictions, which are essential for the efficiency and planning of photovoltaic systems.

## 📌 Project Overview

- **🎯 Objective**: To estimate daily solar irradiation using MLP models, with data pre-processed using clustering techniques for enhanced accuracy.
- **📊 Data**: Historical meteorological data from public weather stations (2010-2021) provided by INMET.
- **🛠️ Methods**:
  - Data clustering using the K-Means algorithm.
  - Training and testing MLP models with hyperparameter optimization.
  - Comparison of model performance using error metrics and determination coefficients.

## 🛡️ Methodology

### 📂 Data Preparation
- **Source**: Meteorological data from INMET covering 2010-2021.
- **Features**: 🌡️ Temperature and 💧 humidity were selected as the primary predictors of solar irradiation.
- **Clustering**: Applied K-Means clustering to divide data into two groups:
  - Cluster 0: Higher humidity.
  - Cluster 1: Lower humidity.

### 🤖 Model Training
- Used **Multi-Layer Perceptron (MLP)** models with:
  - Hidden layers optimized via grid search.
  - ReLU activation function and Adam optimizer.
- Split data into 80% training and 20% testing.

### 📈 Model Evaluation
Performance metrics included:
- **📐 Mean Absolute Error (MAE)**: Measures average prediction error.
- **📏 Mean Squared Error (MSE)**: Penalizes larger errors.
- **📉 Root Mean Squared Error (RMSE)**: Error in the same units as the data.
- **✅ R² Score**: Indicates variance explained by the model.

### 🛠️ Prototype Development
- **Hardware**: Sensor (DHT22) and microcontroller (ESP32) for real-time data collection during Spring 2024.
- **Data Storage**: ☁️ Cloud database integration.

## 🚀 Key Results

- **Generalist Model**:
  - MAE: 0.1939 (Testing)
  - R² Score: 0.8728
  - Most consistent performance across all clusters.

- **Specific Models** (Cluster-based):
  - Cluster 0 (High Humidity): Higher precision with lower error metrics.
  - Cluster 1 (Low Humidity): Higher error variability.

## 🏆 Conclusion

The generalist MLP model demonstrated superior accuracy and robustness, making it the preferred choice for practical applications in solar irradiation estimation. 🌞 The results highlight the potential of machine learning in optimizing photovoltaic system performance through precise solar data predictions.

