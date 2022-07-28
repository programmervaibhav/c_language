#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{

    struct employee vaibhav={100,34.50,"vaibhav"};
    // struct employee vaibhav={0};//All element set to 0
    printf("Code is :%d\n",vaibhav.code);
    printf("Salary is :%f\n",vaibhav.salary);
    printf("Name is :%s\n",vaibhav.name);
     return 0;
}