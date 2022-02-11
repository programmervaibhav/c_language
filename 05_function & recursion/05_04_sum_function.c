#include<stdio.h>

//Sum is a function which takes a and b as input and returns an integer as an output

int sum(int a, int b);//function prototype declaration

int main(){
    int c;
    c=sum(2,5);//function call
    printf("The Value of c is %d",c);

return 0;
}

int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}