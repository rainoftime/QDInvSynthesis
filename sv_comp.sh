#!/bin/sh  
#============ get the file name ===========  
Folder_A="./array-examples" 
Output_file="./sv_comp.txt"  
LLVM_BUILD_PATH="$HOME/llvm-3.6.2/build/bin"
#这里用于清空原本的输出文件，感觉 : 这个符号用处挺大，shell的学习还是要多用才是  
: > $Output_file         
for file_a in ${Folder_A}/*; do  
    temp_file=`basename $file_a`  
    # echo $temp_file >>	$Output_file  
    $LLVM_BUILD_PATH/main ${Folder_A}/$temp_file -- >> $Output_file  
done  


