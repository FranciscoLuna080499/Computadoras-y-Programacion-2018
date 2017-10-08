#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

int main()
{
    int victoria, j, jm, vida, ch;
    victoria = 0;
    j = 0;
    vida = 5;
    jm = 0;
    
    srand(time(NULL));
    printf("Bienvenido a Piedra, papel o tijeras\n");
    do{
    printf("1.Piedra\n");
    printf("2.Papel\n");
    printf("3.Tijeras\n");
    while ((ch = getchar()) != '\n' && ch != EOF);
    scanf("%d",&j);
    while ((ch = getchar()) != '\n' && ch != EOF);
    jm = rand() % 4;
    if(j > 3)
    {
         do{
         printf("Coloque un numero menor o igual a tres\n");
         scanf("%d",&j);
         }while(j > 3);
    }
    
    if(j == 1)
    {
         printf("Usted eligio rocas\n");
         if(jm == 3)
         {
               printf("Computadora eligio tijeras. Roca rompe tijeras.\n");
               printf("Jugador gana un punto.\n");
               victoria = victoria + 1;
               printf("Usted tiene %d vidas.\n",vida);
               printf("Usted tiene %d puntos.\n",victoria);
         }
         if(jm == 2)
         {
               printf("Computadora eligio papel. Papel envuelve roca.\n");
               printf("Usted pierde una vida\n");
               vida = vida - 1;
               printf("Usted tiene %d vidas\n",vida);
               printf("Usted tiene %d puntos\n",victoria);
               
         }
         if(jm == j)
         {
               printf("Computadora eligio roca.\n Empate");
         }
    }
    if(j == 2)
    {
         printf("Usted eligio papel");
         if(jm == 1)
         {
               printf("Computadora eligio roca.\n Papel envuelve roca.\n Usted gana un punto.\n");
               victoria = victoria + 1;
               printf("Usted tiene %d vidas\n",vida);
               printf("Usted tiene %d puntos\n",victoria);
         }
         if(jm == 3)
         {
               printf("Computadora eligio tijera.\n Tijera corta papel.\n Usted pierde una vida.\n");
               vida = vida - 1;
               printf("Usted tiene %d vidas\n",vida);
               printf("Usted tiene %d puntos\n",victoria);
         }
         if(jm == j)
         {
               printf("Computadora eligio papel.\n Empate");
         }
    }
    if(j == 3)
    {
         printf("Usted eligio tijeras\n");
         if(jm == 1)
         {
               printf("Computadora eligio piedra.\n Roca rompe tijera.\n.Usted pierde una vida.\n");
               vida = vida - 1;
               printf("Usted tiene %d vidas\n",vida);
               printf("Usted tiene %d puntos\n",victoria);
         }
         if(jm == 2)
         {
               printf("Computadora eligio papel.\n Tijera corta papel. Usted gana un punto\n");
               victoria = victoria + 1;
               printf("Usted tiene %d vidas\n",vida);
               printf("Usted tiene %d puntos\n",victoria);
         }
         if(jm == j)
         {
               printf("Computadora eligio tijeras.\n Empate.\n");
         }
    }
}while(victoria < 5 || vida > 0);
if(victoria == 5)
{
            printf("Usted ha ganado");
}
if(vida < 0)
{
        printf("Usted perdio");
}

getchar();
return 0;
}

