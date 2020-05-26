#include <stdio.h>
#include <stdlib.h>

/**
* El programa pintara todos los números pares del 0 al 100
*
*/

int main(int argc, char *argv[]) {


	int BANDERA_MAXIMA = 100;
	int contador = 0;

	do{
		contador++;
		int residuo = contador%2;
		if(residuo == 0){
				printf("El número: %i es par.\n",contador);
		}
	
	}while(contador< BANDERA_MAXIMA);
	
	
	
	return 0;
}
