# -*- coding: utf-8 -*-
"""
Created on Thu Nov 19 15:08:24 2020

@author: pumaka

purpose of this py is to minimie the call process
so that you may not be cut off from the yahoo finance
"""

import pandas_datareader as pdr
import datetime as dt
import datareader.read_data as rd
import pandas as pd
import os

path = os.path.dirname(os.path.abspath(__file__))

## favorites
KOSPI = open(path+"\\0.favorites_KOSPI.txt","r+",encoding='utf-8').read().split("\n")
KOSDAQ = open(path+"\\0.favorites_KOSDAQ.txt","r+",encoding='utf-8').read().split("\n")
OTHERS = open(path+"\\0.favorites_Others.txt","r+",encoding='utf-8').read().split("\n")
markets = [KOSPI,KOSDAQ] ## add others
markets_n = ['KOSPI','KOSDAQ']

korea_list = rd.get_pd_data('KOREA')

cntr = 0
for market in markets:
    for name in market:
        if os.path.exists(path+"\\"+markets_n[cntr]+"\\"+name+"_transition.txt") :
             content = pd.read_csv(path+"\\"+markets_n[cntr]+"\\"+name+"_transition.txt",sep='\t',index_col = 0)
        try:
            start_date = korea_list.query("name=='{}'".format(name))['ipo'].to_string(index=False)
            print(start_date)
            now = dt.datetime.now().isoformat()
    
            code = rd.search_code(name, markets_n[cntr])
            data = pdr.data.DataReader(code,'yahoo', start_date, now)
            data.head(9)# -*- coding: utf-8 -*-    
            data.to_csv(path+"\\"+markets_n[cntr]+"\\"+name+"_transition.txt", sep='\t')
        except OverflowError:
            start_date = '2010-01-01'
            code = rd.search_code(name, markets_n[cntr])
            data = pdr.data.DataReader(code,'yahoo', start_date, now)
            data.head(9)# -*- coding: utf-8 -*-    
            data.to_csv(path+"\\"+markets_n[cntr]+"\\"+name+"_transition.txt", sep='\t')
    cntr += 1
cntr = 0    

# head = data.head()
# data['Diff'] = data['Close'] - data['Open']

# data['Diff'].plot()
