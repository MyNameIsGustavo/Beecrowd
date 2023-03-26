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

int main(void)
{  int vetor[20];
   int aux, i, vet;
   
   for(i = 0; i < 20; i++){
      scanf("%d", &vetor[i]);
   }
   
   for(i = 0; i < 10; i++){
      vet = 19;
      
      aux = vetor[i];
      vetor[i] = vetor[vet];
      vetor[vet] = aux;
      
      vet = vet - 1;
   }
   
   for(i = 0; i < 20; i++){
      printf("N[%d] = %d\n", i,vetor[i]);
   }
   
   return 0;
}