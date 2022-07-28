#include<stdio.h>

int main(){

//basic structure of file
FILE *ptr;
ptr=fopen("sample2.txt","w");//for write the file//if file is not exits it create the file
ptr=fopen("sample.txt","r");//for reading the file
ptr=fopen("sample3.txt","a");//for writing the text at the end of the file/if the file is not exit then it create the file

return 0;
}