#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num=0;
	
	
	printf("\n Cual es el iva de la cantidad:");
	     scanf("%d", & num);
	
	printf("\n iva: %d", num*16/100);
	    
	printf("\n subtotal: %d",num-(num*16/100));
	        
	printf("\n total: %d",num);
	     	     
	return 0;
}
