#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    /* it's precedence order is
    1-----> *,/,%
    2-----> +,-
    3-----> =
    */

    // in case if the presedence order is different then it will check from right to left

    printf("The Value of 3*x-8*y is %d\n", 3 * x - 8 * y);

    // in case if the presedence order is same then it will check from left to right
// means associativity has been apply automatecally
    printf("The Value of  8*y/3*x is %d\n", 8 * y / 3 * x);
    // 8*3/3*2=24/6 will gives wrong ans
    // 24/3*2
    // 8*2
    // 16
    return 0;
}