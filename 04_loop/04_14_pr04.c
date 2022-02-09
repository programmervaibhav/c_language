#include<stdio.h>
int main(){
int i=0,sum=0,n;

printf("Enter the value :");
scanf("%d",&n);

/*While loop*/
// while(i<=n){
//     sum+=i;
// i++;
// }
// 

// do-while

do
{
    sum+=i;
    i++;
    // printf("The value of sum(1 to 10) is %d\n",sum);
    
} while (i<=n);


printf("The value of sum(1 to 10) is %d",sum);
return 0;
}