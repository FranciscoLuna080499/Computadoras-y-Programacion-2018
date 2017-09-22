/*
Francisco Alberto Luna Velázquez
Computadoras y Programacion
Programa de comparacion de 3 numeros y cual es el menor
Tarea No 7
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int iNumero1;
    
    int iNumero2;
    
    int iNumero3;
    
    printf("\nDigite el Numero 1:");
                   scanf("%i",&iNumero1);
                   
    printf("\nDigite el Numero 2:");
                   scanf("%i",&iNumero2);
                   
    printf("\nDigite el Numero 3:");
                   scanf("%i",&iNumero3);
    printf("\n"); 
    
    if (iNumero1>0 && iNumero2>0 && iNumero3 >0 )
    {                                            
    if ((iNumero1==iNumero2) && (iNumero2==iNumero3) && (iNumero1==iNumero3)   )
       {
                           printf("Los numeros son iguales todos son el Numero: %i\n",iNumero1);                      
                             }
       
    
    if ((iNumero1<iNumero2) && (iNumero1<iNumero3)){
                         
                         printf("El Numero menor es el: %i\n",iNumero1);                                       
                           
                           }else if( (iNumero2<iNumero1) && (iNumero2<iNumero3) ){
                                          
                                          printf("El Numero menor es el: %i\n",iNumero2);              
                                 
                                 }else if( (iNumero3<iNumero1) && (iNumero3<iNumero2) ){
                                      
                                                     printf("El Numero menor es el: %i\n",iNumero3); 
                                                                             
                                       }
     
     }else{
           printf("Todos los numeros tienen que ser mayores a 0\n");
           } 
  system("PAUSE");	
  return 0;
}
