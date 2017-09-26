#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int inf=3;
	int sup=6;
	int j=0;
	
	for(inf=3;inf<=sup;inf=inf+1){
		for(j=1;j<=10;j=j+1)
		
		printf("%ix%i=%i\n",inf,j,inf*j);
	}
system("pause");
	return 0;
}
