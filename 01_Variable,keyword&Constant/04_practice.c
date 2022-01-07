#include <stdio.h>
int main()
{
    int principle = 100, rate = 4, year = 1;
    int simple_interest = (principle * rate * year) / 100;
    printf("The Value of simple interest is %d", simple_interest);
    return 0;
}