#include <stdio.h>
#include <math.h>
int main()
{
    float a = 4, b = 5;
    printf("The value of a+b is:%f\n", a + b);
    printf("The value of a-b is:%f\n", a - b);
    printf("The value of a*b is:%f\n", a * b);
    printf("The value of a/b is:%f\n", a / b);

    int z;
    z = b * a; //legal
    // b*a=z//illegal
    printf("The value of z is:%f\n", z);

    //VIP
    // float can not apply in modulus(%)
    printf("5 when divided by 2 leaves a remainder of %d\n",5%2);
    printf("-5 when divided by 2 leaves a remainder of %d\n",-5%2);
    // it always take the sign of numerator
    printf("5 when divided by -2 leaves a remainder of %d\n",5%-2);

    // No operator is assumed to be present
        // printf("The value of 4*5 is %d\n",(4)*(5));--->will not return 20/wrong!
    printf("The value of 4*5 is %d\n",(4)*(5));// for example {4.5} & {(4)(5)}

    // There is no operator to perform exponentiation in c
    // printf("The value of 4^5 is %d\n",4^5);//-->will not produce 4 to the power 5  

    printf("The value of 4^5 is %f\n",pow(4,5));// Here we need to use %f format specifier as it return double.

                // VIP
                // Type conversion
                //int & int ---> Int; Int & float--->Float; float & float---->float
        printf("The Value of 6+5 is %d\n",6+5);
        printf("The Value of 6+5.6 is %f\n",6+5.6);
        printf("The Value of 6.1+5.6 is %f\n",6.1+5.6);
        printf("The Value of 5/2 is %d\n",5/2);
        printf("The Value of 3.0/9 is %f\n",3.0/9);
    return 0;
}