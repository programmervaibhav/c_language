#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value %d element is :\n", i);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value %d element is :%f\n", i, ptr[i]);
    }
    return 0;
}