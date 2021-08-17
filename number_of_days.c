#include<stdio.h>
void days();
int main()
{
    int y,month;
    printf("Enter Year : ");
    scanf("%d",&y);
 if(y%400==0 ||(y%4==0 && y%100!=0))
    {
        printf("LEAP YEAR : 366 DAYS\n");
        printf("Enter month :\n");
        printf(" For JANUARY,MARCH,MAY,JULY,AUGUST,OCTOBER,DECEMBER=1\n");
        printf("For FEBRUARY=2\n");
        printf("For APRIL,JUNE,SEPTEMBER,NOVEMBER=3  and For EXIT=0\n");
        days();

    }
    else
    {
        printf("NOT A LEAP YEAR : 365 DAYS\n");
        printf("Enter month :\n");
        printf(" For JANUARY,MARCH,MAY,JULY,AUGUST,OCTOBER,DECEMBER=4\n");
        printf("For FEBRUARY=5\n");
        printf("For APRIL,JUNE,SEPTEMBER,NOVEMBER=6 and For EXIT=0\n");
        days();
    }
    return 0;
    
}
void days()
{
    int x;
     scanf("%d",&x);
    switch(x)
    {
        case 1:
        case 4:
        printf("31 DAYS\n");
        break;
        case 3:
        case 6:
        printf("30 DAYS\n");
        break;
        case 2:
        printf("29 DAYS\n");
        break;
        case 5:
        printf("28 DAYS\n");
        break;
        default:
        break;

    }
    

}