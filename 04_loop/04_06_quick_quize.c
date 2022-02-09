// To print the natural by using do-while loop
#include<stdio.h>
int main(){
int i=0,n;
printf("Enter the value of n\n");
scanf("%d",&n);
do{
printf("the value is %d\n ",i+1);//que is print natural no. so we take here i+1
i++;
}
while(i<n);
    return 0;
}