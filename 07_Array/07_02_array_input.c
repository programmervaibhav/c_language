#include<stdio.h>

int main(){
int marks[4];

printf("Enter the marks of studen 1: \n");
scanf("%d",&marks[0]);
printf("Enter the marks of studen 2: \n");
scanf("%d",&marks[1]);
printf("Enter the marks of studen 3: \n");
scanf("%d",&marks[2]);
printf("Enter the marks of student 4: \n");
scanf("%d",&marks[3]);

printf("You enterd the marks are %d %d %d and %d",marks[0],marks[1],marks[2],marks[3]);
return 0;
}