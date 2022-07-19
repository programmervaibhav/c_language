#include <stdio.h>
void printadd(int a)
{
    printf("The Address of variable is %u\n", &a);
}
int main()
{
    int i = 4;

    printf("The value of i is %d\n", i);
    printadd(i);
    printf("The value of i is %u\n", &i);
    return 0;
}