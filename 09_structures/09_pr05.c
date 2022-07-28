#include<stdio.h>

typedef struct complex
{
    int real;
    int complex;
}comp;


void display(comp c){
printf("The value of real part is %d\n",c.real);
printf("The value of Imaginary part is %d\n",c.complex);
}
int main(){
comp cnum[5];
for (int i = 0; i < 5; i++)
{
    printf("enter the real value for %d num\n",i+1);
    scanf("%d",&cnum[i].real);
    printf("enter the complex value for %d num\n",i+1);
    scanf("%d",&cnum[i].complex);
}

for (int i = 0; i < 5; i++)
{
    display(cnum[i]);
}

return 0;
}