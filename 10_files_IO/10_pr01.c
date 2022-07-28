#include<stdio.h>

int main(){
FILE *ptr;
int a,b,c;
ptr=fopen("pr01.txt","r");
fscanf(ptr,"%d %d %d",&a,&b,&c);
printf("The values of a b and c is %d %d %d\n",a,b,c);
fclose(ptr);
return 0;
}