/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Saida 2. 
	ID: 2748
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
   for(int i = 0; i < 38; i++)
   {  printf("-");
      if(i == 37)
         printf("-\n");
   }
   
   printf("|");
   for(int i = 1; i <= 37; i++)
   {  if(i == 10)
      {  printf("Roberto");
         i += 6;
      }
      else
         printf(" ");
   }
   printf("|\n");


   printf("|");
   for(int i = 1; i <= 37; i++)
      printf(" ");
   printf("|\n");

   printf("|");
   for(int i = 1; i <= 37; i++)
   {  if(i == 10)
      {  printf("5786");
         i += 3;
      }
      else
         printf(" ");
   }
   printf("|\n");

   printf("|");
   for(int i = 1; i <= 37; i++)
      printf(" ");
   
   printf("|\n");

   printf("|");
   for(int i = 1; i <= 37; i++)
   {  if(i == 10)
      {  printf("UNIFEI");
         i += 5;
      }
      else
        printf(" ");
   }
   printf("|\n");

   for(int i = 0; i < 38; i++)
   {  printf("-");
      if(i == 37)
         printf("-\n");
   }

   return 0;
}