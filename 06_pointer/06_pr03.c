#include<stdio.h>

void tenmul(int j,int *mul){
*mul=j*10;
}
int main(){
int i=10;
int mul;

printf("The value of i before 10times is %d\n",i);
tenmul(i,&mul);
printf("The value of i after 10times is %d\n",mul);
return 0;

}