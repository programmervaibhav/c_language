// Note:- strcpy():-This function is used to copy the content of second string into first string passed to it.
#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "This";
    char str2[50];
    strcpy(str2, str);
    printf("Now the st2 is %s",str2);
     return 0;
}