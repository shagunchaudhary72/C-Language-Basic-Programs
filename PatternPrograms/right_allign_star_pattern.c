
#include<stdio.h>

int main(){

int lineCount;
printf("Right Allign Star Pattern ");
printf("\nEnter Lines TO Print : ");
scanf("%d",&lineCount);

for(int lineNo=1; lineNo<=lineCount; lineNo++){
	for(int blank=1; blank<=lineCount-lineNo; blank++){
		printf(" ");
	}
	for(int star=1; star<=lineNo; star++){
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
