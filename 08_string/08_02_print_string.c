#include <stdio.h>

int main()
{
    // char str[] = "VAIBHAV";
    char str[] = {'v','a','i','b','h','a','v','\0'};
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}