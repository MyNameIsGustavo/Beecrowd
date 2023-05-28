/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Quadrante. 
	ID: 1115
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define        TRUE        1
#define        FALSE       0

typedef struct
{  int X;
   int Y;
} Coordenadas;

int main(void)
{  Coordenadas ponto;
   
   while(TRUE)
   {  scanf("%d %d", &ponto.X, &ponto.Y);
      if(ponto.X == 0 || ponto.Y == 0)
         break;
      else
      {  if(ponto.X > 0 && ponto.Y > 0)
            puts("primeiro");
         else if(ponto.X > 0 && ponto.Y < 0)
            puts("quarto");
         else if(ponto.X < 0 && ponto.Y > 0)
            puts("segundo");
         else
            puts("terceiro");
      }
   }
   return 0;
}