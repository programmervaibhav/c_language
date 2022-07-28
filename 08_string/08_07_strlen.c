#include <stdio.h>
#include <string.h> //header file for string function

int main()
{
    char *str = "Vaibhav";
    int a = strlen(str);
    printf("The length is %d", a);

    return 0;
}

// Note:-This function is used to count the number of character in the string  excluding the null(\0)character in the function