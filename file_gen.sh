#!/usr/bin/sh

echo "Enter the file name: "
read file_name

touch $file_name
echo -e "#include<bits/stdc++.h>\nusing namespace std;\nint main(){\n}" >> $file_name
# value=$(<a.cpp)
# echo -e "$value" >> $file_name
