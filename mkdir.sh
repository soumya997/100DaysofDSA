#!/usr/bin/sh

# Author : Soumyadip Sarkar
# License = "Feel free to copy, I appreciate if you star 🌟 the repo"
# Github: soumya997

# Usage:
# directory generator with single file maker using some boilerplate code


echo "Enter the dir name: "                             # asking user for giving a directory name
read dir_name                                           # taking file name from user

mkdir $dir_name                                         # making the directory using the user input
cp touch.sh $dir_name                                   # copying touch.sh in that directory
touch $dir_name/README.md                               # creating a README.md file
echo -e "# Things I learned in: $dir_name\n**Note:** use the github provided TOC for navigaing." >> $dir_name/README.md            # putting the dir name inside the README

