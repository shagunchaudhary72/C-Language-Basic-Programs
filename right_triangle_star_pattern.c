// For the printing of star formation
#include<stdio.h>

int main(void)
/*
{
    printf("\n*\n**\n***\n****\n*****");
    return 0;
}
*/
/*
int main(void)
{
    printf("*");
    printf("\n**");
    printf("\n***");
    printf("\n****");
    printf("\n*****");
    return 0;

}
*/
// BY USING LOOP
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}