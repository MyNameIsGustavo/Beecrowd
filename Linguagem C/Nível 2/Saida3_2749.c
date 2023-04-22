/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Saída 3. 
	ID: 2749
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
   {  if(i == 1)
      {  printf("x = 35");
         i += 5;
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
   {  if(i == 16)
      {  printf("x = 35");
         i += 5;
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
   {  if(i == 32)
      {  printf("x = 35");
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