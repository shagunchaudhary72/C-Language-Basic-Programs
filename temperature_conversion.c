#include<stdio.h>
int main(void)
{
    float temp;
    printf("Enter temperature in degreeFahrenhiet : ");
    scanf("%f",&temp);
    temp= (5/9.0f)*(temp-32);
    printf("Temperature in degreeCelcius : %.2f",temp);
    printf("\nEnter temperature in degreeCelcius : ");
    scanf("%f",&temp);
    temp= ((9/5.0f)*temp)+32;
    printf("Temperature in degreeFarhenheit : %.2f",temp);
    return 0;
    
}
