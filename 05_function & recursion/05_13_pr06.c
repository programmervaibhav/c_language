#include<stdio.h>
int sum(int n);
int main(){
int n;
printf("Enter the number\n");
scanf("%d",&n);
sum(n);
return 0;
}
int sum(int n){
    int i;
    int sum_n=0;
for (i; i<=n; i++)
{
    sum_n+=i;
}

   printf("The sum is %d",sum_n);
   return sum;
    
}