#include <stdio.h>
int tenmul(int a)
{
    int mul;
    mul = a * 10;
    return mul;
}
int main()
{
    int i = 10;
    printf("The value of i before 10times is %d\n", i);
    printf("\t\they\n");
    printf("The value of i after 10times is %d\n", tenmul(i));
    return 0;
}