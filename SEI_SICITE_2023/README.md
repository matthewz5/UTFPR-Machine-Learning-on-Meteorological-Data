# **Solar Irradiation Estimation Using Machine Learning Techniques**

🌞 **Overview**  
This repository focuses on the statistical analysis of meteorological data and the application of machine learning (ML) methods to estimate solar irradiation. The study addresses challenges in acquiring high-cost, precise solar irradiation data by leveraging accessible meteorological variables, such as temperature, humidity, and time.

👨‍🔬 **Researchers:**  
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

📄 **Publication Link:**  
[Analysis of Machine Learning Methods for Estimating Solar Irradiation](https://www.researchgate.net/publication/375890910_Analysis_of_Machine_Learning_Methods_for_Estimating_Solar_Irradiation)

---

## **Project Objectives**  
🌍 **Context:**  
Climate change drives the transition to renewable energy, where solar energy plays a vital role. Accurate solar irradiation data is essential for photovoltaic system efficiency, but challenges include high sensor costs and data acquisition complexity.  

🔍 **Goal:**  
Analyze machine learning methods to estimate solar irradiation using readily available meteorological data. This project evaluates several regression techniques to improve prediction accuracy while maintaining computational efficiency.

---

## **Methodology Overview**  
### 🛠 **Steps in the Analysis:**
1. **Data Collection:**  
   - Public datasets from meteorological agencies, focusing on the region of Cornélio Procópio, Paraná, Brazil.  
   - Variables include: time, temperature, humidity, and more.

2. **Data Preprocessing:**  
   - Outlier detection and removal.  
   - Data normalization (StandardScaler and Min-Max scaling).  

3. **Exploratory Data Analysis:**  
   - Statistical summaries and correlation analysis.  

4. **Model Selection and Training:**  
   - Machine Learning models applied:  
     - Multilayer Perceptron (MLP)  
     - Decision Tree (DT)  
     - Random Forest (RF)  
     - K-Nearest Neighbors (k-NN)  

5. **Parameter Optimization:**  
   - Grid search for hyperparameter tuning.

6. **Performance Evaluation:**  
   - Metrics: Mean Absolute Error (MAE), Mean Squared Error (MSE), Root Mean Squared Error (RMSE), R².  

7. **Validation:**  
   - Cross-validation with K-Fold (k=10).  
   - Seasonal testing on different years and weather conditions.

---

## **Highlights of Results**  
📊 **Key Findings:**  
- **Best Performing Models:**  
  - **MLP**: Achieved the highest average accuracy (92.99%).  
  - **DT**: Reliable and computationally efficient for embedded systems.  
- **Discarded Models:**  
  - **k-NN** and **RF**: Lower accuracy and higher computational cost.  

🌟 **Applications:**  
This methodology enables cost-effective and accurate estimation of solar irradiation, essential for energy optimization and planning.

---