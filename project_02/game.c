#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(int you, int comp)
{
    // return 0 for draw ,-1 for loose,1 for win
    /*draw condition gg,ss,gg*/
    // if (you=='s' && comp=='s'||you=='g'&& comp=='g'|| you=='w' && comp='w')
    if (you == comp)
    {
        return 0;
    }

    // condition for loose sg,ws,gw
    else if (you == 's' && comp == 'g' || you == 'w' && comp == 's' || you == 'g' && comp == 'w')
    {
        return -1;
    }
    // condition for win sw,ws,wg,gs
    else if (you == 's' && comp == 'w' || you == 'w' && comp == 's' || you == 'w' && comp == 'g' || you == 'g' && comp == 's')
    {
        return 1;
    }

    else
    {
        return printf("wrong choice\n");
    }
}

int main()
{
    char you, comp;
    
    srand(time(0));
    int number=rand()%100+1;

    if (number<33)
    {
        comp = 's';
    }
    else if (number>33 && number<66)
    {
        comp = 'w';
    }
    else{
        comp='g';
    }
    
    printf("Enter 's' for snake,'g'for gun,'w' for water:\n");
scanf("%c", &you);
printf("You chose '%c' and computer chose '%c'\n",you,comp);
int result=snakewatergun(you,comp);
if(result==0){
        printf("Game draw\n");
}
else if (result==1)
{
        printf("You win\n");
}
 else{
        printf("You loose");
 }

return 0;
}