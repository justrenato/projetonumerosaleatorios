//Renato Ribeiro da Silva GRR20172113
#include <stdio.h>
#include <stdlib.h>
#include "lcrandom.h"

int periodo[10000000]; //tamanho do vetor pré estipulado na descrição do trabalho


int calculoperiodo(){
	int aux=0,sair=0,cont=0;

	for (int i = 0; i < 10000000; ++i) //poem zeros em todo o vetor
	{
		periodo[i]=0;
	}

	while (sair==0){    //gera um aleatorio e o usa como indice para incrementar a posição do vetor correspondente ao indice
		aux=lcrandom();
		periodo[aux]++;
		if (periodo[aux]>1) //se o numero ja tiver sido gerado sai do laço e printa quantos valores foram gerados
		{
			sair=1;
			printf("%d\n",cont);
		} 
		cont++;
	}
	return(cont);
}


int main()
{
	calculoperiodo();
	return 0;
}