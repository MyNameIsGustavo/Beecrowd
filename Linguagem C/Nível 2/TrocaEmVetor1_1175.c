/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Troca em vetor 1. 
	ID: 1175
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define     TAM_VETOR    20

int main(void)
{  int vetor[TAM_VETOR];
   int aux, i;
   
   for(i = 0; i < TAM_VETOR; i++)
      scanf("%d", &vetor[i]);
   
   for(i = 0; i < (TAM_VETOR / 2); i++)
   {  aux = vetor[i];
      vetor[i] = vetor[(TAM_VETOR - 1) - i];
      vetor[(TAM_VETOR - 1) - i] = aux;
   }
   
   for(i = 0; i < TAM_VETOR; i++)
      printf("N[%d] = %d\n", i, vetor[i]);
   
   return 0;
}