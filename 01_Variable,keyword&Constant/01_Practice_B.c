#include <stdio.h>
int main()
{

    int length, breadth;

    printf("Enter the length of your rectangle:\n");
    scanf("%d", &length);
    printf("Enter the breadth of your rectangle:\n");
    scanf("%d", &breadth);

    printf("The area of your rectangle is :%d", length * breadth);
    return 0;
}