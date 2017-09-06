#include <stdio.h>
#include "lcrandom.h"
#define maxlin 100 
#define maxcol 100
int aux,cont[100],maior;
char hist[maxlin][maxcol];


void contagemValores(){
	for (int i=1;i<=1000000;i++){ // gera 10^6 valores aleatorios e conta a frequencia
	aux=lcrandom()%100;
	cont[aux]=cont[aux]+1;}

	for (int i=0;i<100;i++){ //verifica maior valor gerado aleatoriamente
		if (i==0){
			maior=cont[i];
		}
		if(cont[i]>maior){
			maior=cont[i];
		}
	}

	for (int i = 0; i < 100; ++i){ //substitui no vetor os valores aleatorios pela porcentagem de sua frequencia
		cont[i]=(cont[i]*100)/maior;
		//printf("i de %d = %d\n",i,cont[i] ); //imprime vetor
	}
}

void InicHistograma(){ //atribui as frequencias ao histograma
	for (int i = 0; i < maxlin; ++i)
	{
		for (int j = 0; j < cont[i]; ++j)
		{
			hist[i][j]='*';
		}
	}
}

void imprimeHistograma(){


	printf("  ");
	for (int i = 0; i < maxcol+1; ++i) // essa parte imprime os numeros da coluna horizontal
	{
		if (i%10==0){printf("%d",i);
		} 
		if (i%10!=0 && i%9!=0){ printf(" "); // imprime 10,20,30 e quando resto de i por 10 for diferente de 0 imprime espaço
		}
	}	
	printf("\n");



	printf("  ");
	for (int i = 0; i < maxcol+1; ++i) // essa parte imprime os - e + da coluna horizontal
	{
		if (i%10==0){printf("+");
		} else { printf("-");}
	}
	printf("\n");


	for (int i = 0; i < maxlin; ++i)
	{
		if (i>9){ //imprime a barra lateral
			printf("%d|",i);
		} else {
			printf("0%d|",i);
		}


		for (int j = 0; j < maxcol; ++j) //imprime o histograma
		{
			printf("%c",hist[i][j]);
		}
		printf("\n");
	}
}


int main(){
	

	contagemValores();
	InicHistograma();
	imprimeHistograma();




	return 0;
}