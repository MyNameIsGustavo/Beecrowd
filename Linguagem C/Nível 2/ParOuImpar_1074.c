/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Par ou Ímpar. 
	ID: 1074
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define        TRUE        1
#define        FALSE       0

int isPar (int *);
void ImprimeResultado (int);

int main(void)
{  int numero, qtdeTeste;

   scanf("%d", &qtdeTeste);
   while(qtdeTeste--)
   {  scanf("%d", &numero);
   
      ImprimeResultado(isPar(&numero));
   }
   
   return 0;
}

int isPar(int *valor)
{  if(*valor == 0)
      return 0;
   else
   {  if((*valor % 2) == 0)
      {  if(*valor > 0)
            return 1;
         else
            return 2;
      }
      else
      {  if(*valor > 0)
            return 3;
         else
            return 4;
      }
   }
}

void ImprimeResultado(int valor)
{  switch(valor)
   {  case 0:
         puts("NULL");
         break;
      case 1:
         puts("EVEN POSITIVE");
         break;
      case 2:
         puts("EVEN NEGATIVE");
         break;
      case 3:
         puts("ODD POSITIVE");
         break;
      case 4:
         puts("ODD NEGATIVE");
         break;
   }
}