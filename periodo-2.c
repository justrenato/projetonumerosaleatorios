#include <stdio.h>
#include <stdlib.h>
#include "lcrandom.h"

unsigned char periodo[2147483647];


int calculoperiodo(){
	int aux=0,sair=0,cont=0;

	for (int i = 0; i < 2147483647; ++i)
	{
		periodo[i]='0';
	}

	while (sair==0){
		aux=lcrandom();
		//printf("%d ",aux );
		
		if (periodo[aux]!='0')
		{
			sair=1;
			printf("ALEATORIOS GERADOS ANTES DE REPETIR: %d\n",cont);
		} else { 
			periodo[aux]='1';
		}
		
		cont++;
		//printf("Aleatorios gerados: %d\n",cont-1 );
	}
	return(cont);
}


int main()
{
	//lcrandom_parms(1103515245,12345,2147483648);
	calculoperiodo();
	return 0;
}