#include <stdio.h>

int main()
{
//fscanf() is file counter part of scanf
    FILE *ptr;
    int num,num2;
    ptr = fopen("Vaibhav.txt", "r");
    fscanf(ptr,"%d",&num);//just similar to scanf
    fscanf(ptr,"%d",&num2);//just similar to scanf
    fclose(ptr);//it close the file
    printf("The value of num is %d\n",num);
    printf("The value of num2 is %d\n",num2);
    
    return 0;
}