//Renato Ribeiro da Silva GRR20172113
#include <stdio.h>
#include <stdlib.h>
#include "lcrandom.h"
unsigned char periodo[2147483648]; //tamanho referente ao parametro M

long int calculoperiodo(){
	long int aux=0,sair=0,cont=0;

	for ( long int i = 0; i < 2147483648; ++i) //poem zeros em todo o vetor
	{
		periodo[i]='0';
	}

	while (sair==0){
		aux=lcrandom(); //gera um aleatorio e o usa como indice para incrementar o valor na posição do vetor correspondente ao indice
		
		if (periodo[aux]!='0') //se o numero ja tiver sido gerado sai do laço e printa quantos valores foram gerados
		{
			sair=1;

			printf("%li\n",cont);

		} else { 
			periodo[aux]='1';
		}
		
		cont++;
	}
	return(0);
}


int main()
{
	lcrandom_parms(1103515245,12345,2147483648); //parametros para A, C e M alterados para os melhores possiveis.
	calculoperiodo();
	return 0;
}