#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i; //...j  will now store the address of i
                 // It gives the value of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    // It gives the address of i
    printf("The address of i is%u\n", &i); //.....here %u is use as format specifier
    printf("The address of i is%u\n", j);
    // it gives the adrress  of pointer which we decleare
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));

    return 0;
}
