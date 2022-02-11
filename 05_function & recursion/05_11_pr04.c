// Fabinocci serires
// hint: fib(n)=fib(n-1)+fib(n-2)
// fib(1)=0
// fib(2)=1

#include <stdio.h>

int fabinocci_series(int n);
int main()
{
    int n;

    printf("Enter The number :\n");
    scanf("%d", &n);
    printf("Fabinocii series is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d,", fabinocci_series(i));
    }

    return 0;
}

int fabinocci_series(int n)
{

    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fabinocci_series(n - 1) + fabinocci_series(n - 2);
    }
}