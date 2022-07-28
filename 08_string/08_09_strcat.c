// strcat():-This function is used to concatenet two strings.
//concatenet:-there is no any space between nay two string

#include <stdio.h>
#include<string.h>
int main()
{
    char st1[45]="Hello";
    char *st2="Vaibhav";

    strcat(st1,st2);
   printf("Now the st1 is %s",st1);  
     return 0;
}