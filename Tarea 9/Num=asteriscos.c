#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num=0;
	int x;

	printf("\n dame un numero entero");
	   scanf("%d", &num);
	   
	for(x=0;x<num;x++){   
	  printf("*"); 
	}
	  
	return 0;
}
