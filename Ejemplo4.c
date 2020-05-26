#include <stdio.h>
#include <stdlib.h>

/**
* El programa pintara las tablas de multiplicar del 1 al 10
*
*/

int main(int argc, char *argv[]) {



	int contadorUno = 0;
	int contadorDos = 0;

	do{
			contadorUno++;
	printf("---------------\n");
	printf(" TABLA DEL %i \n",contadorUno);
	printf("---------------\n");
	
	do{
			contadorDos++;
		printf("%i x %i = %i\n",contadorUno,contadorDos,(contadorUno*contadorDos));
	
	}while(contadorDos <= 9);
	

	contadorDos= 0;
	}while(contadorUno<= 9);
	
	
	
	return 0;
}
