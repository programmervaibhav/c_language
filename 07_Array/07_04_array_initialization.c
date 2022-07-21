#include <stdio.h>
// size of int =4bytes it also depend on architecture of computer some times it may be 2byes as well
int main()
{
    int a[] = {9, 8, 7};
    printf("The value of a[0] is %d\n", a[0]);
    printf("The value of a[1] is %d\n", a[1]);
    printf("The value of a[2] is %d\n", a[2]);
    float b[] = {9.5, 8.6, 7.9};
    printf("The value of b[0] is %f\n", b[0]);
    printf("The value of b[1] is %f\n", b[1]);
    printf("The value of b[2] is %f\n", b[2]);
    return 0;
}