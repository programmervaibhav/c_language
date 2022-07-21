#include <stdio.h>

int main()
{
    int mul[10];
    int input;
    printf("Enter the number whose multiplication table you want:");
    scanf("%d", &input);
    for (int i = 0; i < 10; i++)
    {
        mul[i] = input * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d*%d =%d\n", input, i + 1, mul[i]);
    }
    return 0;
}