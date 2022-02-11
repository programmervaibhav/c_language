#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int number,guess,nguess;
srand(time(0));
number=rand()%100+1;//it generates a random number between 1-100
// printf("The number is %d\n",number);


// keep running the loop until the number is guessed

do
{
    printf("Guess the number between the 1-100\n");
    scanf("%d",&guess);

    if (guess<number)
    {
        printf("Higher number Please\n");
    }
    else if (guess>number)
    {
        printf("Lower number Please\n");  
      }
      else{
          printf("You guess it in %d attempt\n",nguess);
          
      }
    nguess++;
    
} while (number!=guess);



return 0;
}