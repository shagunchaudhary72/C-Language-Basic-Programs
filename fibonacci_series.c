#include<stdio.h>
void fibonacci_series(int n);
int main(void)
{
    int number;
    printf("Enter last number  : ");
    scanf("%d",&number);
    fibonacci_series(number);
    return 0;
}
void fibonacci_series(int n)
{
    int i;
    int n1=0,n2=1;
    int n3;
    printf("%d  %d  ",n1,n2);
    for(i=0;i<n;i++)
    {
         n3=n1+n2;
        printf("%d  ",n3);
        n1=n2;
        n2=n3;
    }
    
}