#include <stdio.h>
#include "lcrandom.h"
#define maxlin 100 

int main(){
	
	int aux,cont[100],maior;
	char hist[maxlin][50];

	for (int i=0;i<100;i++){ //tira o lixo do vetor e insere 0
		cont[i]=0;
	}
	
	for (int i=1;i<=1000000;i++){ // gera 10^6 valores aleatorios e conta a frequencia
		aux=lcrandom()%100;
		cont[aux]=cont[aux]+1;
	}

	for (int i=0;i<100;i++){ //verifica maior valor gerado aleatoriamente
		if (i==0){
			maior=cont[i];
		}
		if(cont[i]>maior){
			maior=cont[i];
		}
	}

	for (int i = 0; i < 100; ++i){ //substitui no vetor os valores aleatorios pela porcentagem de sua frequencia
		cont[i]=(cont[i]/maior)*100;
	}

	// for (int i = 0; i < 100; ++i) //imprimir vetor.
	// {
	// 	printf("i de %d = %d\n",i,cont[i] );
	// }

	printf("  0  10  20   30  40  50  60  70  80  90  100\n");
	printf("  +---+---+---+---+---+---+---+---+---+---+");
	for (int i = 0; i < maxlin; ++i) //imprime histograma
	{
		if (i<10)
		{
			printf("\n0%d|",i);
		} else {printf("\n%d|",i);}
		for (int j = 0; j < 50; ++j)
		{			
			hist[i][j]='*';
			printf("%c ",hist[i][j] );
		}
		
	}
	return 0;
}