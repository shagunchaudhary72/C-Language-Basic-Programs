#include<stdio.h>
int main(void)
{
    int y,year;
    printf("Enter a Year :");
    scanf("%d",&y);
    //BY USING CONDITIONAL (TERNARY OPERATOR)
    /*
     year=(y%4==0?(y%100!=0?1:(y%400==0?1:0)):0);
     if(year==1)
     printf(" Leap year");
     else
     printf("Not a Leap year");
     */
    /*
    //WITHOUT USING LOGICAL OPERATORS
    if(y%400==0)
    printf("LEAP YEAR");
    else if(y%100==0)
    printf("Not a LEAP YEAR");
    else if(y%4==0)
    printf("LEAP YEAR");
    
    */
   
   //BY USING LOGICAL OPERATORS
   if(y%400==0 ||(y%4==0 && y%100!=0))
   printf("%d is a Leap Year",y);
   else
    printf("%d is not a Leap Year",y);
   
   
    
     return 0;
}