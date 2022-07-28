#include <stdio.h>

int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "vaibhav";
    int count = occurence(st, 'v'); //'' --> inside occurenec value required to get output
    printf("The occurence is %d", count);
    return 0;
}