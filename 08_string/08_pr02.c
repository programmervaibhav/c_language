#include <stdio.h>
// its own strlen function hence we not use string.h header file
int strlen(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        ptr++;
        len++;
    }
    return len;
}

int main()
{
    char st[] = "Vaibhav";
    int l = strlen(st);
    printf("The length of this string is %d", l);
    return 0;
}