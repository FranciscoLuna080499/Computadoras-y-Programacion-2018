#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
		int j=0;
	
	printf("dame un numero del 1 al 7");
	    scanf("%d", &j);
	 
	if (j>=1&&j<=7) {    
	
	switch (j){
        case 1:
        	printf("lunes");
        break;
		case 2:
		    printf("martes");
		break;
		case 3:
		    printf("miercoles");
		break;
		case 4:
		    printf("jueves");
		break;
		case 5:
		    printf("viernes");
		break;
		case 6:
		    printf("sabado");    
		break;
		case 7:
		    printf("domingo");    
		break;
 	   }
 	}else{
	    printf("deben ser numeros del 1 al 7");
		 }		
	return 0;
}
