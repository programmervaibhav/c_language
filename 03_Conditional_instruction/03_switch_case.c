#include <stdio.h>
int main()
{
    int rating;
    printf("Enter Your rating(1-5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your ratting is 1");
        break;
    case 2:
        printf("Your ratting is 2");
        break;
    case 3:
        printf("Your ratting is 3");
        break;
    case 4:
        printf("Your ratting is 4");
        break;
    case 5:
        printf("Your ratting is 5");
        break;
    default:
        printf("Invalid rating!");
        break;
    }
    return 0;
}