/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Exame Geral. 
	ID: 2534
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define     TRUE     1
#define     FALSE    0

void ordernaVetor(int *, int);

int main (void)
{	int qtdeNumeroHabitantes, qtdeConsultas, posicao;

   while(scanf("%d %d", &qtdeNumeroHabitantes, &qtdeConsultas) != EOF)
   {  
      int vetor[qtdeNumeroHabitantes];
      for(int i = 0; i < qtdeNumeroHabitantes; i++)  
         scanf("%d", &vetor[i]);
      
      ordernaVetor(vetor, qtdeNumeroHabitantes);
      
      while(qtdeConsultas--)
      {  scanf("%d", &posicao);
         printf("%d\n", vetor[posicao - 1]);
      }
      
   }
	return 0;
}

void ordernaVetor(int *vetor, int tamanho)
{  int aux;

   for(int i = 0; i < tamanho - 1; i++)
   {  for(int j = 0; j < tamanho - i - 1; j++)
      {  if(vetor[j] < vetor[j + 1])
         {  aux = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = aux;
         }
      }
   }
}