#include<stdio.h>
void printPattern(int n);
int main(){
    int n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}
// for n = 3
// *
// ***
// *****
// 1 - 1
// 2 - 3
// 3 - 5
// (2n-1)
void printPattern(int n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("*");    

        }
        printf("\n");
    }
    
}
