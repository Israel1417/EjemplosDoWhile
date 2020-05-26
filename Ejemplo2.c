#include <stdio.h>
#include <stdlib.h>

/**
* El programa se ejecutara solo hasta que BANDERA_MAXIMA sea == a 10
*
*/

int main(int argc, char *argv[]) {


	int BANDERA_MAXIMA = 10;
	int contador = 0;

	do{
		contador++;
		printf("Contador: %i \n",contador);
	}while(contador< BANDERA_MAXIMA);
	
	
	
	return 0;
}
