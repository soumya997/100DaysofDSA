#!/usr/bin/sh

# Author : Soumyadip Sarkar
# License = "Feel free to copy, I appreciate if you star 🌟 the repo"
# Github: soumya997

# Usage:
# multiple file generator with boilerplate code(you can use it in competitions of codeforces,codechef).



for i in {a..c}                                               # change `c` by 'e' to create 5 files or any other alphabet...

do

  touch "$i.txt"                                              # creating each file

  # A single liner for a basic boilerplate
  # echo -e "#include<bits/stdc++.h>\nusing namespace std;\nint main(){\n}" >> "$i.txt"

  value=$(<../template.cpp)                                   # reading the template file (remove the ../ if you are running this file where template.cpp is)
  echo -e "$value" >> "$i.cpp"                                # putting the read content in the new file

done
