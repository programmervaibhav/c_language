#include <stdio.h>

int main()
{

    char str[36];
    printf("Enter the name:");
    //*************************************************
    // scanf("%s", str);//it accept the only single word string.
    // if we enters the string with space init ,it print only the first word and terminate the programm to the next new line.
    // to avoid this we used the gets() fuction.
    // gets()-->it recieve the string with space in it as well it print the multiword  string
    gets(str);
    //*************************************************
    puts(str);
    // puts() ----> This function print the string  place on the next line
    //*************************************************
    //     printf("The Enterd name is: %s", str);
    //*************************************************
    //  char *str;
    //  printf("Enter the string:");
    //  scanf("%s",&str);
    //  printf("The enterd String Is: %c",str);
    return 0;
}