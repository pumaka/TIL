import pandas as pd
import os

path = os.path.dirname(os.path.abspath(__file__))


def get_code(df, name):
    code = df.query("name=='{}'".format(name))['code'].to_string(index=False)
    code = code.strip()
    return code

def get_pd_data(country = 'KOERA'):
    ##content = pd.read_csv("stock_num.txt",sep="\t",names=['회사명','종목번호','업종','주요제품','상장일','결산월','대표자명','홈페이지','지역'])
    content = pd.read_csv(path+"\\"+country+".txt",sep="\t",names=['name','code','field','prod','ipo','set','rep','homepage','region'])
    content.code = content.code.map('{:06d}'.format)
    ##else for other markets
    return content

def search_code(name, market = 'KOSPI'):
    ## Kospi = .KS kosdaq = .KQ
    if market == 'KOSPI':
        code_df = get_pd_data()[['name','code']]
        code = get_code(code_df,name)
        code = code + ".KS"
    elif market == 'KOSDAQ':
        code_df = get_pd_data()[['name','code']]
        code = get_code(code_df,name)
        code = code + ".KQ"
    else: 
        code_df = get_pd_data('US')[['name','code']]
        code = get_code(code_df,name)
    return code