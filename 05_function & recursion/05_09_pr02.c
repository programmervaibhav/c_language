#include<stdio.h>

float converter(int celcius);

int main(){
    int fharenheit,celcius;

    printf("Enter the temperature in celcius: ");
    scanf("%d",&celcius);
    printf("The temperature in fharenhiet is %.2f",converter(celcius));
return 0;
}

float converter(int celcius){
float fharenheit;
fharenheit=(celcius*9.0/5.0)+32;
return fharenheit;
}