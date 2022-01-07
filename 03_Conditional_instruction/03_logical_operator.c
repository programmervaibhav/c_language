#include <stdio.h>
int main()
{

    int age;
    // int vippass = 0;
    // int vippass = 1;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age <= 70 && age>=18)
    // if ((age <= 70 && age >= 18) || vippass == 0)
    {
        printf("You are above 18 abd below 70, you can  drive \n");
    }
    else
    {
        printf("You cannot drive\n");
    }
    if (age == 50)
    {
        printf("Half century\n");
    }
    return 0;
}
