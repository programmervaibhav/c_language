#include <stdio.h>

int main()
{

    FILE *ptr;
    int num, num2;
    ptr = fopen("Vaibhav555.txt.", "r");
    if (ptr == NULL)
    {
        printf("The file does not exit\n");
    }
    else
    {

        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The value of num is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }
    return 0;
}