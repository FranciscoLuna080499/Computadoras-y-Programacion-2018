#include <stdio.h>
#include <stdlib.h>
#include "Tarea20.h"

int main(int argc, char *argv[]) {
	
	//Cuadro
	int columnas=0;
	int filas=0;
	int x=0;
    
	printf("filas del cuadro \n");
	   scanf("%d", &columnas);
	printf("columnas del cuadro \n");
       scanf("%d", &filas); 
	x=fnCuadro(filas,columnas);	
	
	//Iva 
	float cant=0.0;
	float resul;
	printf("Dame una cantidad\n");
	   scanf("%f",&cant);

	resul=fnIva(cant);
	printf("\n",resul);
	
	system ("pause");
	
	return 0;
}
