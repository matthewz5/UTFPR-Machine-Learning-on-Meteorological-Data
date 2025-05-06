# Development of Solar Irradiation Estimation for Solar Photovoltaic Power Generation

This project focuses on the **development of a low-cost prototype** to estimate solar irradiation, a critical factor in optimizing the performance and economic feasibility of photovoltaic systems.

## Researchers

- **Matheus Henrique da Silva**  
  - Undergraduate Student in Control and Automation Engineering.  
  - **University:** Universidade Tecnológica Federal do Paraná (UTFPR), Cornélio Procópio, Paraná, Brasil.  
  - **Email:** matheussilva.2019@alunos.utfpr.edu.br  
  - **ID Lattes:** [5450995625966991](http://lattes.cnpq.br/5450995625966991)

- **Supervisor:**  
  - **Wesley Angelino de Souza**  
  - Lecturer, Graduate Program in Electrical Engineering.  
  - **University:** Universidade Tecnológica Federal do Paraná (UTFPR), Cornélio Procópio, Paraná, Brasil.  
  - **Email:** wesleyangelino@utfpr.edu.br  
  - **ID Lattes:** [8594457321079718](http://lattes.cnpq.br/8594457321079718)

**Publication Link:**  [Development of Solar Irradiation Estimation for Solar Photovoltaic Power Generation](https://www.researchgate.net/publication/385475138_DESENVOLVIMENTO_DE_ESTIMACAO_DE_IRRADIACAO_SOLAR_PARA_PERFIS_DE_GERACAO_DE_ENERGIA_FOTOVOLTAICA)

## Project Objectives

Solar energy is a renewable resource that plays a vital role in combating climate change and reducing reliance on fossil fuels. 

By leveraging machine learning techniques and low-cost sensors, this project presents a reliable solution to monitor and predict solar irradiation in varying weather conditions.


## Methodology Overview

1. **Prototype Development**:
   - **Sensor**: DHT22 (measures temperature and humidity with high accuracy).
   - **Microcontroller**: ESP32 (for data collection and real-time transmission via Wi-Fi).
   - **Data Integration**: Collected data sent to Google Sheets using HTTP requests and Google Apps Script.

2. **Machine Learning Model**:
   - Algorithm: **Multilayer Perceptron (MLP)**.
   - Architecture: Two hidden layers (60 and 30 neurons), using **ReLU activation** and **Adam optimizer**.
   - Performance:
     - Coefficient of Determination R2: 86.19%.
     - Error Metrics: MAE = 0.2203, RMSE = 0.3717.

3. **Data Collection**:
   - Period: March-April 2024.
   - Location: Cornélio Procópio, Paraná, Brazil.
   - Sampling: Four measurements per hour.

## Highlights of Results

- The prototype successfully predicted solar irradiation patterns with high accuracy, comparable to data from the **National Meteorological Institute (INMET)**.
- Challenges:
  - Slight underestimation during low-irradiation periods due to abrupt weather changes.
- Achievements:
  - Demonstrated that simple, cost-effective solutions (< R$100.00) can reliably estimate solar irradiation.

## Applications

1. **Accessibility**: Utilized affordable hardware to make monitoring tools more widely available.
2. **Sustainability**: Contributed to optimizing renewable energy systems.
3. **Future Recommendations**:
   - Experiment with deep learning models for better accuracy.
   - Improve data collection frequency and quality control mechanisms.