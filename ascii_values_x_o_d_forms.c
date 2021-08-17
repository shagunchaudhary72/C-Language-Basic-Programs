#include<stdio.h>

int main(void)
{
    char c;
    int a;
    printf("Enter a character: ");
    scanf("%c",&c);
    printf("\nASCII value in decimal format : %d",c);
    printf("\nASCII value in octal format : %o",c);
    printf("\nASCII value in hexadecimal format : %x",c);
     printf("\nEnter a ASCII VALUE : ");
    scanf("%d",&a);
    printf("\nCharacter Equivalent of %d :%c ",a,a);
return 0;
}
 
