//ADDITION of TWO numbers
//SUBTRACTION OF TWO NUMBERS
//PRODUCT OF TWO NUMBERS
//DIVISION OF TWO NUMBERS
#include<stdio.h>
int main(void )
{
    int n1,n2;
    printf("\n Enter first number : ");
    scanf("%d",&n1);
    printf("Enter Second number :");
    scanf("%d",&n2);
    printf("\n SUM=%d",n1+n2);
    printf("\n DIFFERENCE=%d",n1-n2);
    printf("\n PRODUCT=%d",n1*n2);
    printf("\n DIVISION=%f",(float)n1/n2);
    return 0;
}