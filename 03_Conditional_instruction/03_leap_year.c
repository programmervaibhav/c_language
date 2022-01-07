#include <stdio.h>
int main(){
    int year;
    printf("Enter year\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("Enter year is leap year");
    }
    else{
        printf("Enter year is not a leap year");
    }
    return 0;
}