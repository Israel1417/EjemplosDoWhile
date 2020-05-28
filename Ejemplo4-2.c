#include <stdio.h>
#include <stdlib.h>

/**
* El programa pintara las tablas de multiplicar del 1 al 10
*
*/

int main(int argc, char *argv[]) {

	int contadorUno=0;
	int contadorDos=0;
	int	VALOR_FINAL=9;
	int	VALOR_INICIAL=0;

	do{
			contadorUno++;
	printf("---------------\n");
	printf(" TABLA DEL %i \n",contadorUno);
	printf("---------------\n");
	
	do{
			contadorDos++;
		printf("%i x %i = %i\n",contadorUno,contadorDos,(contadorUno*contadorDos));
	
	}while(contadorDos <= VALOR_FINAL);
	
		contadorDos=VALOR_INICIAL;
		
	}while(contadorUno<= VALOR_FINAL);
	
	return 0;
}
