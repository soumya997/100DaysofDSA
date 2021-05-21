#!/usr/bin/sh

for i in {a..c}
do
  touch "$i.txt"
  echo -e "#include<bits/stdc++.h>\nusing namespace std;\nint main(){\n}" >> "$i.txt"
done
