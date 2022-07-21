#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The Value of element %d is :%d\n", i + 1, *(ptr+i));
//     }
// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The Value of element %d is :%d\n", i + 1, ptr[i]);
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    printArray(array, 7);
    return 0;
}