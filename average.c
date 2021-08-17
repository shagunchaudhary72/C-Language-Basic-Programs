//Average of a given number
#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    printf("\n Average of %d,%d,%d=%d",a,b,c,(a+b+c)/2);
    return 0;
}