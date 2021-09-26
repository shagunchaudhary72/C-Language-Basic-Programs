
#include<stdio.h>

int main(){

int lineCount;
printf("Numbered Pyramid Pattern ");
printf("\nEnter Lines TO Print : ");
scanf("%d",&lineCount);

for(int lineNo=1; lineNo<=lineCount; lineNo++){
	for(int blank=1; blank<=lineCount-lineNo; blank++){
		printf("  ");
	}
	for(int digit=1; digit<=lineNo; digit++){
		printf(" %d",digit);
	}
	for(int digit=lineNo-1; digit>0; digit-- ){
		printf(" %d",digit);
	}
		printf("\n");
	}
	return 0;
}