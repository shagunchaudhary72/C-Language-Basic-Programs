#include<stdio.h>
#include<math.h>

int main(void)
{
    int a,b,c;
    float s,area;
    printf("Enter three sides of triangle in cm\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b)
    {
    printf("Perimeter of Triangle : %d cm",a+b+c);
    s=(a+b+c)/2.0f;
    area=sqrt((float)(s*(s-a)*(s-b)*(s-c)));
    printf("\nArea of Triangle : %.2f cm",area);
    }
    else
    {
        printf("Triangle is not possible by these sides");
    }
    
    return 0;
}