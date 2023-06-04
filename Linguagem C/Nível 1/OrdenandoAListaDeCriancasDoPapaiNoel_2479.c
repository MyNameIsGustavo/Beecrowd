/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Ordenando a Lista de Crianças do Papai Noel. 
	ID: 2479
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define     TRUE    	1
#define     FALSE   	0
#define     MAX     	21

typedef struct 
{  char nome[MAX];
   char comportamento;
} Aluno;

void ordenaVetor(Aluno *, int);

int main(void)
{  int qtdeTestes, comportamentoPositivo, comportamentoNegativo;

   comportamentoPositivo = 0;
   comportamentoNegativo = 0;

   scanf("%d", &qtdeTestes);
   Aluno varAluno[qtdeTestes];

   for (int i = 0; i < qtdeTestes; i++)
   {  scanf(" %c %s", &varAluno[i].comportamento, varAluno[i].nome);
      if (varAluno[i].comportamento == '+')
         comportamentoPositivo++;
      else
         comportamentoNegativo++;
   }

   ordenaVetor(varAluno, qtdeTestes);

   for (int i = 0; i < qtdeTestes; i++)
      printf("%s\n", varAluno[i].nome);

   printf("Se comportaram: %d | Nao se comportaram: %d\n", comportamentoPositivo, comportamentoNegativo);
   return 0;
}

void ordenaVetor(Aluno *aluno, int tamanho)
{  int i, j;
   Aluno aux;

   for (i = 0; i < tamanho - 1; i++)
   {  for (j = 0; j < tamanho - i - 1; j++)
      {  if (strcmp(aluno[j].nome, aluno[j + 1].nome) > 0)
         {  aux = aluno[j];
            aluno[j] = aluno[j + 1];
            aluno[j + 1] = aux;
         }
      }
   }
}
