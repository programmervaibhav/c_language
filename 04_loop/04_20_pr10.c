#include<stdio.h>
int main(){
int i=2,prime=1,n=11;
do
{
    
    if (n%i==0)
    {
            prime=0;
            break;
            }
            
i++;
           
           
    
} while (i<n);


 if (prime==0)
            {
                printf("This is not a prime no.\n");
            }
            else
            {
                printf("This is a prime no\n");
            }
return 0;
}