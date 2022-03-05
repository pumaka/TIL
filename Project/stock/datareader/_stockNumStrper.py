import pandas as pd

code_df = pd.read_html('http://kind.krx.co.kr/corpgeneral/corpList.do?method=download', header=0)[0]

code_df.to_csv('KOREA.txt', index = False, header = None, sep = '\t')


