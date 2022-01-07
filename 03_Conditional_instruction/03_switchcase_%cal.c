#include<stdio.h>
int main(){
    int percentage;
    printf("Enter your percentage :");
    scanf("%d",&percentage);
    switch(percentage){
        case(100<=percentage<=90):
        printf("Your garde is :A");
        break;
    }
}