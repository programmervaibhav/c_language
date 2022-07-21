#include <stdio.h>

void printTable(int *mulTable,int num,int n){
    printf("The multiplicatio table of %d is :\n",num);
    for(int i=0;i<n;i++){
        mulTable[i]=num*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dx%d=%d\n",num,i+1,mulTable[i]);
    }
    printf("*********************************\n\n");
}


int main()
{
    int multable[3][10];
    printTable(multable[0],2,10);
    printTable(multable[1],7,10);
    printTable(multable[2],9,10);

    return 0;
}