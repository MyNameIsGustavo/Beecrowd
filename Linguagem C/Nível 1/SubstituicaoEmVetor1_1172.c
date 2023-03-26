/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Substituição em vetor 1. 
	ID: 1172
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{	int vetor[10], i;
    
    for(i = 0; i < 10; i++)
    {  scanf("%d", &vetor[i]);   }
	
	for(i = 0; i < 10; i++)
	{  if(vetor[i] <= 0)
	    {  vetor[i] = 1;    }
	    
	    printf("X[%d] = %d\n", i,vetor[i]); 
	}
	return 0;
}