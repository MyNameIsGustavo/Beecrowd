/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Estagio. 
	ID: 2248
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     TRUE     1
#define     FALSE    0

struct dadosAluno
{  int codigo;
   int nota;
};

int ordenaStruct(const void *p1, const void *p2);

int main(void)
{  int qtdeTeste, acumuladorTurma;
   int length;
   int vetor[1000], indiceVetor;
   acumuladorTurma = 0;
   
   while(TRUE)
   {  indiceVetor = 0;
      
      scanf("%d", &qtdeTeste);
      if(qtdeTeste == 0)
         break;
      
      struct dadosAluno ptrDados[qtdeTeste];
      for(int i = 0; i < qtdeTeste; i++)
         scanf("%d %d", &ptrDados[i].codigo, &ptrDados[i].nota);
   
      length = sizeof(ptrDados) / sizeof(ptrDados[0]);
      
      /*Ordenacao QSORT do C*/
      qsort(ptrDados, length, sizeof(struct dadosAluno), ordenaStruct);
      
      for(int i = 0; i < length; i++)
      {  if(ptrDados[i].nota == ptrDados[0].nota){
            vetor[indiceVetor] = ptrDados[i].codigo;
            indiceVetor++;
         }
      }
      
      printf("Turma %d\n", acumuladorTurma += 1);
      for (int i = 0; i < indiceVetor; i++)
         printf("%d ", vetor[i]);
      printf("\n\n");
   }
   return 0;
}

/*Utilizando funcao de apoio do qsort*/
int ordenaStruct(const void *p1, const void *p2)
{  const struct dadosAluno *ptrDadosP1 = p1;
   const struct dadosAluno *ptrDadosP2 = p2;
   
   return ptrDadosP2->nota - ptrDadosP1->nota;
}