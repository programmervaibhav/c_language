#include<stdio.h>
#include<math.h>
int main(){
int side;
printf("Enter the value of side\n");
scanf("%d",&side);

//pow function return only double hence we used here %f specifier
printf("The value of area is %f",pow(side,2));
return 0;
}