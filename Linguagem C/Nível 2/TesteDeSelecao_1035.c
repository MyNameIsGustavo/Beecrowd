/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Teste de Seleção 1. 
	ID: 1035
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define        TRUE        1
#define        FALSE       0

void preencheVetor(int *, int);
int validaValores(int *);

int main(void)
{  int numeros[4];
   
   preencheVetor(numeros, sizeof(numeros) / sizeof(numeros[0]));
   
   if((validaValores(numeros) )== TRUE)
      puts("Valores aceitos");
   else
      puts("Valores nao aceitos");
   
   return 0;
}

void preencheVetor(int *vetor, int tamanho)
{  for(int i = 0; i < tamanho; i++)
      scanf("%d", &vetor[i]);
}

int validaValores(int *vetor)
{  if((vetor[1] > vetor[2] && vetor[3] > vetor[0] ) && (vetor[2] + vetor[3]) > (vetor[0] + vetor[1]))
      if((vetor[2] > 0 && vetor[3] > 0) && ((vetor[0] % 2) == 0))
         return TRUE;

   return FALSE;
}