# Python tutorial using pandas on cleaning and parsing a text file.

# Import the pandas library
import pandas as pd

# Analyze the unparsed text file
with open('File_Name.txt') as file:
	file_contents = file.read()
	#print(file_contents)

# Create a pandas dataframe and name each column 
df = pd.read_csv('File_Name.txt', sep= " ", header=None)
df.columns = ["Column_Label1", "Column_Label2", "Column_Label3", "Column_Label4"]
#print(df)

########## This section of code is only needed if you need to clean specific columns ########## 

# Clean the first column by removing the last element of column #1
df['Column_Label1'] = df['Column_Label1'].map(lambda x: str(x)[:-1])
# Clean the second column by removing first five elements of column #2
df['Column_Label2'] = df['Column_Label2'].map(lambda x: str(x)[5:])

########## END ########## 

# Parse the clean columns from the whole pandas dataframe
file_parse = df[["Column_Label1", "Column_Label2"]]
#print(file_parse)

# Save the Parsed File to a text file
file_parse.to_csv('File_Name_Clean.txt', sep=' ', index=False)