#include<stdio.h>
#include<stdlib.h>
//malloc stands for memory allocation.It takes number of bytes to be allocated as an input and return a pointer to type void
/*syntax: ptr=(int*)malloc(30*sizeof(int);*/
int main(){
int *ptr;
// size of variable
// printf("size of int :%d",sizeof(int));
ptr=(int *)malloc(6*sizeof(int));
for (int i = 0; i < 6; i++)
{
    printf("Enter the value of %d element is : \n",i);
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < 6; i++)
{
    printf("The value of %d element is : %d\n",i,ptr[i]);
    
}




return 0;
}