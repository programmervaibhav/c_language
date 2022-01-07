#include <stdio.h>
int main()
{
    float pi = 3.142;
    int radius;
    printf("Enter the value of radius:\n");
    scanf("%d", &radius);
    printf("The area of circle is:%f\n", pi * radius * radius);
    int height;
    printf("Enter the height of cyclider:\n");
    scanf("%d", &height);
    printf("The area of Cylinder is:%f\n", pi * radius * radius * height);
    return 0;
}