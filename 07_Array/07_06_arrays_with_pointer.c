#include <stdio.h>

int main()
{
    int mark[4];
    int *ptr;
    // ptr = &mark[0];
    ptr = mark;//it also work

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the mark of %d student:\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The mark for %d student is :%d\n", i + 1, mark[i]);
    }

    return 0;
}