#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN013\n\n");
	int i,j;
	
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++){
			printf("%d",j);
		}
	printf("\n");
	}
	
	printf("\n");
	
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d",i);
		}
	printf("\n");
	}
	getch();
}
