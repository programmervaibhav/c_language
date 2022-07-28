#include<stdio.h>
#include<string.h>
struct employee
{//structure declares a new user defined data-type
    int code;
    float salary;
    char name[10];
};//semicolon is important



int main(){
int a=34;
char b='g';
float d=234.3543;
//employee e1;
// e1.salary=34.454;--->won't work without employee structure  

struct employee e1; //creating a structure variable

   e1.code=100;
   e1.salary=34.454;
//    e1.name="Harry";//wont work because its string and we not initialize string
strcpy(e1.name,"Vaibhav");
printf("%d\n",e1.code);
printf("%.4f\n",e1.salary);
printf("%s\n",e1.name);



return 0;
}

