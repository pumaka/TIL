import pandas as pd
import os

path = os.path.dirname(os.path.abspath(__file__))

file_name = input("Insert name of the file : ")

read_file = pd.read_excel(path + '\\' + file_name + '.xls')
read_file.to_csv(path + '\\' + file_name + '.csv', index = None, header=True, sep = '\t')