#include <stdio.h>

int main()
{
    int arr[10];
// *ptr=&arr[0];
   int *ptr = arr;
    ptr = ptr + 2;
    if (ptr==&arr[2])
    {
       printf("These points to the same location in the memory\n");
    }
    else
    {
        printf("These points to the differnt location in the memory\n");
    }
    

   
    return 0;
}