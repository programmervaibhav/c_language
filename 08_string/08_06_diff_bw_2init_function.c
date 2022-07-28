#include <stdio.h>

int main()
{

    char *ptr = "Vaibhav"; // A string defined using pointer can be reinitialized
    // char ptr[] = "Vaibhav";//but the string defined using array can not be reinitialized
    ptr="Hey";
    printf("%s",ptr);
    return 0;
}

//to understand this run both initialization one by one
//if we run the program by using pointer it run the next initialized value 
//but we run the program by using array it gives error 