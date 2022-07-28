#include<stdio.h>

int main(){
FILE *ptr;
ptr=fopen("getcdemo.txt","r");
char c=fgetc(ptr);
while (c!=EOF)//EOF---->End of file
{
    printf("%c",c);
    c=fgetc(ptr);
}

return 0;
}