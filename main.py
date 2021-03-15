# importing pandas as pd
import pandas as pd
import csv
import xlrd
import numpy as np


# Read and store content
# of an excel file
read_file = pd.read_excel("DataSheet.xlsx",sheet_name = [0,1,2,3,4])
print(read_file)
#
# # Write the dataframe object
# # into csv file
read_file.to_csv("DataSheet.csv",index = None)
#
#
# # read csv file and convert
# # into a dataframe object
# df = pd.DataFrame(pd.read_csv("DataSheet.csv", sheet_name = [0,1,2,3,4]))
# # print(df)
#
# # show the dataframe
# df
