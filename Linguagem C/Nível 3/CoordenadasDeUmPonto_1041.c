/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Coordenadas de um ponto. 
	ID: 1041.
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define        TRUE        1
#define        FALSE       0

typedef struct{
   float X;
   float Y;
} TPonto;


int main(void)
{  TPonto pt;

   scanf("%f", &pt.X);
   scanf("%f", &pt.Y);
   
   if(pt.X == 0.0 && pt.Y == 0.0)
      puts("Origem");
   else
   {  if(pt.X > 0.0)
      {  if(pt.Y > 0.0)
            puts("Q1");
         else if(pt.Y < 0.0)
            puts("Q4");
      }
      else if(pt.X < 0.0)
      {  if(pt.Y > 0.0)
            puts("Q2");
         else if(pt.Y < 0.0)
            puts("Q3");
      }
      
      if(pt.X == 0.0 && pt.Y != 0.0)
         puts("Eixo Y");
      
      else if(pt.Y == 0.0 && pt.X != 0.0)
         puts("Eixo X");
   }
   
   return 0;
}