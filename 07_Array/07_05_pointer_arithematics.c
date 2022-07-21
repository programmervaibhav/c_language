#include<stdio.h>

int main(){
int i=34;
int *ptr=&i;
//size of integer is 4bytes
printf("The value of i is %u\n",ptr);
ptr++;
printf("The value of i is %u\n",ptr);
ptr--;
printf("The value of i is %u\n",ptr);
ptr=ptr+1;
printf("The value of i is %u\n",ptr);
ptr=ptr-1;
printf("The value of i is %u\n",ptr);

///////////////////////////////////////////////
printf("////////////////////////////////////////\n");

char j='A';
char *ptrchar=&j;
//size of character is 1bytes
printf("The value of j is %u\n",ptrchar);
ptrchar++;
printf("The value of j is %u\n",ptrchar);
ptrchar--;
printf("The value of j is %u\n",ptrchar);
ptrchar=ptrchar+1;
printf("The value of j is %u\n",ptrchar);
ptrchar=ptrchar-1;
printf("The value of j is %u\n",ptrchar);
 
 ///////////////////////////////////////////////
printf("////////////////////////////////////////\n");
float b=1.4;
float *ptrf=&b;
printf("The value of b is %u\n",ptrf);
ptrf++;
printf("The value of b is %u\n",ptrf);
ptrf--;
printf("The value of b is %u\n",ptrf);
return 0;
}