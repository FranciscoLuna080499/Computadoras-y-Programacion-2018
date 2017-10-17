/*
Francisco Alberto Luna Velázquez
Computadoras y Programacion
Programa de 2 numeros flotantes y uno entero, cual es el menor, mayor o si son iguales
Tarea No 12
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int num1 = 0;
	float num2 = 0;
	float num3 = 0;
	
	printf("\n dame un numero entero");
	   scanf("%d", &num1);
	printf("\n dame un numero flotante");
	   scanf("%f", &num2);
	printf("\n dame otro numero flotante");
	   scanf("%f", &num3);
	
	if(num1==num2 && num1==num3)
	  printf("son iguales");
	
	if(num1>num2 && num1>num3){
	  printf("\n %d es el mayor", num1);
    }
	else{
    	if(num1<num2 && num1<num3)
          printf("\n %d es el menor", num1);
	}
	
	if(num2>num1 && num2>num3){
	  printf("\n %f es el mayor", num2);
    }
	else{
    	if(num2<num1 && num2<num3)
          printf("\n %f es el menor", num2);
	}
	
	if(num3>num2 && num3>num1){
	  printf("\n %f es el mayor", num3);
    }
	else{
    	if(num3<num2 && num3<num1)
          printf("\n %f es el menor", num3);
	}  
	   
	return 0;
}
