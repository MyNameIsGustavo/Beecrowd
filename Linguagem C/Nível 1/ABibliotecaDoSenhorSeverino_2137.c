/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: A Biblioteca do Senhor Severino. 
	ID: 2137
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define     TRUE        1
#define     FALSE       0

void ordenaVetor(int *, int);

int main(void)
{  int qtdeTestes, i;

   while (scanf("%d", &qtdeTestes) != EOF)
   {  int vetor[qtdeTestes];
      for (i = 0; i < qtdeTestes; i++)
         scanf("%d", &vetor[i]);

      ordenaVetor(vetor, qtdeTestes);

      for (i = 0; i < qtdeTestes; i++)
         printf("%04d\n", vetor[i]);
   }
   
   return 0;
}

void ordenaVetor(int *vetor, int tamanho)
{  int i, j, aux;

   for (i = 0; i < tamanho - 1; i++)
   {  for (j = 0; j < tamanho - i - 1; j++)
      {  if (vetor[j] > vetor[j + 1])
         {  aux = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = aux;
         }
      }
   }
}
