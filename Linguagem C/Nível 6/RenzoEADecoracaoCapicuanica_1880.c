/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Renzo e a Decoração Capicuânica. 
	ID: 1880
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define     TRUE        1
#define     FALSE       0

int isCapicua(long long int, int);

int main(void)
{  int qtdeTeste;
   long long int numero;
   int base, aux;
   long long int bases[16];

   scanf("%d", &qtdeTeste);
   while (qtdeTeste--)
   {  scanf("%lld", &numero);
      for (base = 2, aux = 0; base <= 16; base++)
      {  if ((isCapicua(numero, base)) == TRUE)
            bases[aux++] = base;
      }

      if (aux == 0)
         puts("-1");
      else
      {  for (int i = 0; i < aux; i++)
         {  if (i == (aux - 1))
               printf("%lld", bases[i]);
            else
               printf("%lld ", bases[i]);
         }
         printf("\n");
      }
   }
   return 0;
}

int isCapicua(long long int numero, int base)
{  long long int vetorPalindromo[100];
   int indexVet, auxWhile;

   indexVet = 0;
   auxWhile = numero;
   while (auxWhile > 0)
   {  vetorPalindromo[indexVet] = auxWhile % base;
      auxWhile /= base;
      
      indexVet++;
   }
   
   for (int inicioVetor = 0, fimVetor = indexVet - 1; inicioVetor < fimVetor; inicioVetor++, fimVetor--)
   {  if (vetorPalindromo[inicioVetor] != vetorPalindromo[fimVetor])
         return FALSE;
   }

   return TRUE;
}