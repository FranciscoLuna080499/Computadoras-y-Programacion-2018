#include <stdio.h>

    int x=0;
    int y=0;
    int fila=0;
    int columna=0;
	

int main(int argc, char *argv[]) {
	
	printf("filas del cuadro \n");
	   scanf("%d", &fila);
	printf("columnas del cuadro \n");
	   scanf("%d", &columna);
	
	for(x=1; x<=fila; x=x+1){
		for(y=1; y<=columna; y=y+1)
	printf("+");
	printf("\n");
    }
	
  system("pause");
  
	return 0;
}
