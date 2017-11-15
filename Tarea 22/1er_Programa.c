#include <stdio.h>
#include <stdlib.h>
#include "info.h"


int main(int argc, char *argv[]) {
	appInfoData("Ejemplo de Punteros", "14/11/2017");
	
	int a;
	a=10;
	int *puntero;
	puntero=&a;
	
	printf("%d \n", *puntero);
	
	
	return 0;
}
