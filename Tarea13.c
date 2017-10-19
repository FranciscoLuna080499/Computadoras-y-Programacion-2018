#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int op=0;
	int x=0;
	int y=0;
	
	do{
		printf("\n 1)sumar \n  \n 2)restar \n  \n 3)salir \n");
		   scanf("%d", &op);
		if(op>=1 && op<=2) {
		   printf("\n dame dos numeros para sumar o restar \n");
		      scanf("%d", &x);
		      scanf("%d", &y);
	    }
		
	           switch(op){
	         	
	              case 1:
	         		    printf("\n %d+%d=%d \n",x,y,(x+y));
	         	    break;
				    
				        case 2:
				          printf("\n %d-%d=%d \n",x,y,(x-y));
				        break;
				
				        case 3:
					        printf("\n salir \n");
	         	    break;
			    }
			    
	    
	}while(op!=3);
	
	system("pause");
	
	return 0;
	
}
