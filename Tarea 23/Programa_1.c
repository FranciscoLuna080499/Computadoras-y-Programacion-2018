#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumnos 
{
  int edad;
  char nombre[60];
  char genero;
  char carrera[25];
  char nCuenta[10];

};

int main(int argc, char *argv[]) {
	
	struct alumnos var1;

    printf("Introduce la edad:");
    scanf("%d",&var1.edad);

    printf("Introduce el nombre:");
    fflush(stdin); // limpia el buffer de teclado 
    gets(var1.nombre);

    printf("Edad:%d nombre:%s",var1.edad, var1.nombre);


	return 0;
}
