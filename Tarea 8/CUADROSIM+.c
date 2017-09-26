#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int j=6;
	int fila, columna;
	
	for(fila=1;fila<=j;fila++){
		for(columna=1;columna<=j;columna++)
		printf("+");
		printf("\n");

	}
	
	printf("Fin del Programa\n");
  system("pause");
	return 0;
}
