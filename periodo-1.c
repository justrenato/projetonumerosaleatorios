#include <stdio.h>
#include <stdlib.h>
#include "lcrandom.h"

int periodo[10000000];


int calculoperiodo(){
	int aux=0,sair=0,cont=0;

	for (int i = 0; i < 10000000; ++i)
	{
		periodo[i]=0;
	}

	while (sair==0){
		aux=lcrandom();
		periodo[aux]++;
		if (periodo[aux]>1)
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