#!/bin/sh
#rename.sh
# $ chmod +x rename.sh
# touch 1.png 2.png 3.png 4.png 
# $ ./rename.sh

for file in $(ls *.png)
do 
    mv $file ${file%png}jpg
done
