#include<stdio.h>
int sum_of_digits(int num);
int reverse_number(int num );
int palindrome(int num);
int armstrong(int num);
int main(void)
{
    int number;
    int choice;
    printf("Enter a number  : ");
    scanf("%d",&number);
   
    do{
     printf("\nEnter choice :0.Exit 1.SUM_of_DIGITS 2.REVERSE_number 3.Check_PALINDROME 4. Check_ARMSTRONG\n");
    scanf("%d",&choice);
    switch(choice)
    {
        
        case 1:
        printf("SUM_OF_DIGITS : %d",sum_of_digits(number));
        break;
        case 2:
        printf("REVERSE_NUMBER : %d",reverse_number(number));
        break;
        case 3:
        palindrome(number);
        break;
        case 4:
        armstrong(number);
        break;
        default:
        break;
    }
    }while(choice!=0);
    
    return 0;
}
int sum_of_digits(int num)
{
    int sum=0;
    int remainder;
    while(num!=0)
    {
         remainder=num%10;
         sum=sum+remainder;
         num=num/10;

    }
    return sum;
}
int reverse_number(int num)
{
    int reverse=0;
    int remainder;
    while(num!=0)
    {
        remainder=num%10;
        reverse=remainder+reverse*10;
        num=num/10;
    }
    return reverse;
}

int palindrome(int num)
{
int rev=reverse_number(num);
if(rev==num)
printf("%d is a Palindrome ",num);
else
{
    printf("%d is not a Plindrome ",num);
}
return 0;
}

int armstrong(int num)
{
    int arm=num;
    int rem;
    int sum=0;
    while(num!=0)
    {
        rem=num%10;
        sum+=(rem*rem*rem);
        num=num/10;
    } 
    if(arm==sum)
    printf("%d is Armstrong",num);
    else
    {
        printf("%d is not Armstrong ");
    }

    return 0;
    
}