#include<stdio.h>
int main(){
    int a;
    printf("Enter the value: ");
    scanf("%d",&a);
    // if while(a>0) is the condition then the loop is know as infinite loop
    while(a<10){
        printf("%d\n",a);
        a++;
    }
    return 0;
}