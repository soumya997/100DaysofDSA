#!/usr/bin/sh

# Author : Soumyadip Sarkar
# License = "Feel free to copy, I appreciate if you star 🌟 the repo"
# Github: soumya997

# Usage:
# file generator with boilerplate code




echo "Enter the file name: "                        # asking user for giving a file name
read file_name                                      # taking file name from user

touch $file_name                                    # creating the file

# A single liner for a basic boilerplate
# echo -e "#include<bits/stdc++.h>\nusing namespace std;\nint main(){\n\n\treturn 0;\n}" >> $file_name


# comment out the above echo line and uncomment this to take the boiler plate from a cpp file(here its a.cpp)
value=$(<../template.cpp)                           # reading the template file
echo -e "$value" >> $file_name                      # putting the read content in the new file
