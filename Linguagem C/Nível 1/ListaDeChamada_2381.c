/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Lista de Chamada. 
	ID: 2381
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define     TRUE     1
#define     FALSE    0
#define     MAX      101

void ordenaVetor(char nomes[][MAX], int tamanho);

int main(void)
{  int qtdeTestes, i, sorteio;
   char vetor[MAX][MAX];

   scanf("%d %d", &qtdeTestes, &sorteio);
   for (i = 0; i < qtdeTestes; i++)
      scanf("%s", vetor[i]);

   ordenaVetor(vetor, qtdeTestes);
   
   printf("%s\n", vetor[sorteio - 1]);
   
   return 0;
}

void ordenaVetor(char nomes[][MAX], int tamanho)
{  int i, j;
   char aux[MAX];

   for (i = 0; i < tamanho - 1; i++)
   {  for (j = 0; j < tamanho - i - 1; j++)
      {  if (strcmp(nomes[j], nomes[j + 1]) > 0)
         {  strcpy(aux, nomes[j]);
            strcpy(nomes[j], nomes[j + 1]);
            strcpy(nomes[j + 1], aux);
         }
      }
   }
}
