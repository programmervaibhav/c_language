#include <stdio.h>
int main()
{
    float celcisus, far;
    printf("Enter the value in degree celcius:");
    scanf("%f", &celcisus);
    far = (celcisus * 9 / 5) + 32;
    printf("The Value of this celcius temperature in fahrenheit is %f", far);
    return 0;
}