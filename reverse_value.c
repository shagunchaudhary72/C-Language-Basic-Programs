#include<stdio.h>
int main(void)
{
    int n,rev=0,i=1,p,rem,a;
    printf("Enter a number : ");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        rev=rem+rev*10;
        
    }
    printf("REVERSE VALUE : %d",rev);
    
    if(a==n)
    printf("\n%d is a palindrome",a);
    else
    {
        printf("\n%d is not a palindrome",a);
    }
    
    n=rev;
    printf("\nFACE VALUES :");
    while(n!=0)
    {
        rem=n%10;
        printf("  %d",rem);
        n=n/10;
        
    }
    n=rev;
    printf("\nPLACE VALUES :");
    while(n!=0)
    {
        rem=n%10;
        p=rem*i;
        i=i/10;
        printf("  %d",p);
        n=n/10;
    }
  
    return 0;





    
}