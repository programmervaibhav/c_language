#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char c[] = "Vaibhv";
        printf("The  string is %s\n", c) ;
    encrypt(c);
    printf("The encrypted string is %s\n", c) ;
     decrypt(c);
    printf("The decrypted string is %s\n", c) ;
    return 0;
}