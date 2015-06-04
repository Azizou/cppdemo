#!/bin/bash
if [ -f $1.cpp ] ; then
    echo "A file with the same name exist already!"
    exit 0;
fi
echo Creating the file templated file $1.cpp .
filename=`echo $1.cpp`
echo "Creating "  $filename
echo "/** Automatically generated template file **/" >> $filename
echo "#include <iostream>" >> $filename
echo "using namespace std;" >> $filename
echo "int main(int argc, char * argv[]){" >> $filename
echo "" >> $filename
echo "}" >> $filename
echo "Done"
