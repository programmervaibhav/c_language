#include<stdio.h>
int main(){
int i=2,prime=1,n=2;

while(i<n){
    if (n%i==0)
    {
        prime=0;
        break;

    }
    
    i++;
}
if(prime==0){
    printf("this is not a prime number");
}
else{
     printf("this is a prime number");
}


return 0;
}