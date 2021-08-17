#include<stdio.h>
int main(void)
{
    float price, quantity;
    printf("Enter Quantity :");
    scanf("%f",&quantity);
    printf("price %f",price);
    if(price<=30)
    printf("\nPRICE : %f",price);
    else if(30<price<=50)
        printf("\nDISCOUNTED PRICE : %f",price*0.9);
        else if(price>50)
        printf("\nDISCOUNTED PRICE :%f ",price*0.85);
        return 0;

    

}