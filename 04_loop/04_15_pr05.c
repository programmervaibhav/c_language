#include<stdio.h>
int main(){
int sum,n=10;

for(int i=1;i<=n;i++){
     printf("8 X %d=%d\n",i,8*i);
   sum+=i*8;
}
  
     printf("sum=%d",sum);
return 0;
}