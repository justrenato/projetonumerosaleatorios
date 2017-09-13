//Renato Ribeiro da Silva GRR20172113
#include <stdio.h>
#include "lcrandom.h"

long int a=40692, c=127, m=10000000,x=0; //valores default da semente x e dos parametros a,c,m.

unsigned long lcrandom (){ // calcula e devolve um valor pseudoaleatório
	x= ((a*x)+c)%m;   //	xi+1 = (A · xi + C) mod M
	return(x);
}

void lcrandom_seed (unsigned long s){ // define o valor inicial (semente) da sequência de aleatórios
	x=s;
}

unsigned long lcrandom_max (){ // informa o valor máximo que pode ser gerado (o mínimo é sempre zero)
	return(m-1);
}

void lcrandom_parms (unsigned long A, unsigned long C, unsigned long M){// modifica os parâmetros da equação do gerador; por default
	a=A;
	c=C;
	m=M;
}
