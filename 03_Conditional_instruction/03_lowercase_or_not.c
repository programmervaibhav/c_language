#include <stdio.h>
// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
// ASCI Tabel
// 97-122=a-z
int main()
{
    char ch;
    printf("Enter your character\n");
    scanf("%c",&ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not lowercase");
    }
    return 0;
}