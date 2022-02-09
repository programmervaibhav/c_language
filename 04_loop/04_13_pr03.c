#include<stdio.h>
int main(){
    int sum,n;

    printf("Enter the value:");
    scanf("%d",&n);
for(int i=0;i<=n;i++){
    sum +=i;
}
printf("The value of sum(1 to 10) is %d",sum);

return 0;
}