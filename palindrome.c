#include<stdio.h>
int main(void)
{
    int rem,rev=0,i=1,num;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    int pal=num;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;

    }
    printf("REVERSE VALUE :%d",rev);
    
    if(pal==rev)
    printf("\n%d is a PALINDROME",pal);
    else
        printf("\n%d is not a PALINDROME",pal);

    
    


}