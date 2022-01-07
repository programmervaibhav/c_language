// c program to check wheather the number is even or odd
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even \n", a);
    }
    else
    {
        printf("%d is odd \n", a);
    }
    // Just for knowledge the else block is not necessary in some case without else block code is also run without showing any error
    return 0;
}