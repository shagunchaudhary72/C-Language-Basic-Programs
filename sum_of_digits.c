#include<stdio.h>
int main(void)
{
    int n,rem,sum=0;
    printf("Enter a three digit number : ");
    scanf("%d",&n);
    if(n>999)
    printf("Entered number having more than three digits");
    else
    {
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;

        }
         printf("Sum of Digits : %d",sum);
    }
   
    return 0;
}

