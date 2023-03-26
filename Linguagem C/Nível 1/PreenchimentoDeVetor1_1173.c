/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Preenchimento de vetor 1. 
	ID: 1173
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{	int n[10];
    int valor, i;
	
	scanf("%d", &valor);
	
	for(i = 0; i < 10; i++)
	{	n[i] = valor;
	
		printf("N[%d] = %d\n", i, valor);
			
		valor = valor * 2;
	}
	return 0;
}