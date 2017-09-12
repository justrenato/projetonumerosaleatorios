#include <stdio.h>
#include <stdlib.h>
#include "lcrandom.h"
<<<<<<< HEAD
=======

unsigned char periodo[2147483647];

>>>>>>> 1f25e6362f1cd0d1bbde5b9ada4879fa8f34d494

unsigned char periodo[2147483648];

<<<<<<< HEAD

 long int calculoperiodo(){
	 long int aux=0,sair=0,cont=0;

	for ( long int i = 0; i < 2147483648; ++i)
=======
	for (int i = 0; i < 2147483647; ++i)
>>>>>>> 1f25e6362f1cd0d1bbde5b9ada4879fa8f34d494
	{
		periodo[i]='0';
	}

	while (sair==0){
		aux=lcrandom();
<<<<<<< HEAD
		
=======
		//printf("%d ",aux );
>>>>>>> 1f25e6362f1cd0d1bbde5b9ada4879fa8f34d494
		
		if (periodo[aux]!='0')
		{
			sair=1;
<<<<<<< HEAD
			printf("ALEATORIOS GERADOS ANTES DE REPETIR: %li\n",cont);
			printf("ultimo gerado: %li\n",aux );
=======
			printf("ALEATORIOS GERADOS ANTES DE REPETIR: %d\n",cont);
>>>>>>> 1f25e6362f1cd0d1bbde5b9ada4879fa8f34d494
		} else { 
			periodo[aux]='1';
		}
		
		cont++;
<<<<<<< HEAD
		
=======
		//printf("Aleatorios gerados: %d\n",cont-1 );
>>>>>>> 1f25e6362f1cd0d1bbde5b9ada4879fa8f34d494
	}
	return(0);
}


int main()
{
	lcrandom_parms(1103515245,12345,2147483648);
	calculoperiodo();
	return 0;
}