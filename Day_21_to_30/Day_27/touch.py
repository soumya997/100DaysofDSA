# IMPORTS
import os

"""
Usage:
    this code takes a filename and creates with that name,
    and paste the read stuff from template.cpp file in it.
"""

filename  = str(input())                    # taking i/p the filename
content = open("../../template.cpp","r").read()   # reading the template file
file = open(filename,"w")                   # creating a new file using the filename
file.writelines(content)                    # writing the read data from template to the new file
file.close()                                # closing the new created file



