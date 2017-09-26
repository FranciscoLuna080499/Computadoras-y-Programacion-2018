#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int j=0;
	int k=0;
	
	for(j=1; j<=6; j=j+1){
		if(j==1){
			for(k=1; k<=6; k=k+1){
				printf("+");
			}
		}
		if(j>=2&&j<=5){
			for(k=1; k<=6; k=k+1){
				if(k==1){
					printf("+");
				}
				if(k>=2&&k<=5){
					printf(" ");
				}
				if(k==6){
					printf("+");
				}
			}
		}
		if(j==6){
			for(k=1; k<=6; k=k+1){
				printf("+");	
			}
		}
		printf("\n");
	}
	printf("\nFin");
}
	
