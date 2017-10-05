#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j=0;
	
	printf("\n dame un numero entero");
	    scanf("%d", &j);
	    
	  if (j % 2 == 0) {
	    printf("\n es par");
	  
	  }else{ 
	    printf("\n es impar");
	  } 
	  
	return 0;
}
