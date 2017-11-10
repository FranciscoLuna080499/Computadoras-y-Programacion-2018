int fnCuadro(int columnas, int filas){
	int x=0;
	int y=0;
		
        for(x=1; x<=filas; x=x+1){
	     for(y=1; y<=columnas; y=y+1)
	printf("+");
        printf("\n");
    }
}

float fnIva(float cant){
	float valor=0.16;
	float ivaa=0.0;
	float total=0.0;
	ivaa=cant*valor;
	total=cant+ivaa;
	printf("Cantidad= %.2f \n Iva= %.2f \n Total= %.2f \n ",cant,ivaa,total);
}