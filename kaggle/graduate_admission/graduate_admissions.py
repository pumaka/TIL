import pandas as pd
import os
import numpy as np

data = pd.read_csv(os.path.abspath("""C:/Users/USER/Desktop/TIL/kaggle/graduate_admission/Admission_Predict.csv"""))

def pretty_print(data):
    for column in data.columns:
        print(str(column) + " average : " +  sum(data[column])/data.count())

##print(data["GRE Score"])

pretty_print(data)