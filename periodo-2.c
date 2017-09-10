#include <stdio.h>
#include <stdlib.h>
#include "lcrandom.h"

unsigned char periodo[2147483648];


 long int calculoperiodo(){
	 long int aux=0,sair=0,cont=0;

	for ( long int i = 0; i < 2147483648; ++i)
	{
		periodo[i]='0';
	}

	while (sair==0){
		aux=lcrandom();
		
		
		if (periodo[aux]!='0')
		{
			sair=1;
			printf("ALEATORIOS GERADOS ANTES DE REPETIR: %li\n",cont);
			printf("ultimo gerado: %li\n",aux );
		} else { 
			periodo[aux]='1';
		}
		
		cont++;
		
	}
	return(0);
}


int main()
{
	lcrandom_parms(1103515245,12345,2147483648);
	calculoperiodo();
	return 0;
}