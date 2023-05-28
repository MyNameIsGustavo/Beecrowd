/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Jogando cartas fora.
	ID: 1110
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     TRUE     1
#define     FALSE    0

struct no 
{  int numero;
   struct no* prox;
}; typedef struct no TNo;

typedef struct 
{  TNo* topo;
   int qtde, qtdeForaPilha;
} TPilha;

void InicializaPilha(TPilha*);
void ImprimePilha(TPilha*);
void PUSH(TPilha*, int);
void POP(TPilha*, int[]);
void regraJogo(TPilha*);

int qtdeForaPilha;

int main(void) 
{  int numero, i;
   TPilha pilha;
   while (TRUE) 
   {  scanf("%d", &numero);
      if (numero == 0 || numero > 50)
         break;
         
      InicializaPilha(&pilha);
      
      int foraPilha[numero];
      
      for (i = numero; i > 0; i--)
         PUSH(&pilha, i);

      POP(&pilha, foraPilha);

      printf("Discarded cards:");
      for (i = 0; i < qtdeForaPilha; i++) 
      {  printf(" %d", foraPilha[i]);
         if (i != qtdeForaPilha - 1)
            printf(",");
      }
      printf("\nRemaining card: %d\n", pilha.topo->numero);
      qtdeForaPilha = 0;
   }
   return 0;
}

void regraJogo(TPilha* pilha) 
{  TNo *coordenadaPilha, *basePilha;

   basePilha = pilha->topo;
   coordenadaPilha = pilha->topo;
   
   if (basePilha->prox != NULL) 
   {  while (basePilha->prox != NULL)
         basePilha = basePilha->prox;

      pilha->topo = pilha->topo->prox;
      coordenadaPilha->prox = basePilha->prox;
      basePilha->prox = coordenadaPilha;
   }
}

void InicializaPilha(TPilha* pilha) 
{  pilha->topo = NULL;
   pilha->qtde = 0;
}

void PUSH(TPilha* pilha, int numero) 
{  TNo *coordenadaPilha;

   coordenadaPilha = (TNo*)malloc(sizeof(TNo));
   coordenadaPilha->prox = pilha->topo;
   pilha->topo = coordenadaPilha;
   coordenadaPilha->numero = numero;

   pilha->qtde++;
}

void POP(TPilha* pilha, int foraPilha[]) 
{  TNo *coordenadaPilha;

   while (pilha->topo->prox) 
   {  coordenadaPilha = pilha->topo;
      foraPilha[qtdeForaPilha++] = coordenadaPilha->numero;
      pilha->topo = pilha->topo->prox;
      free(coordenadaPilha);
      regraJogo(pilha);
   }
}
