/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Saida 2. 
	ID: 2748
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{  for(int i = 0; i < 38; i++)
   {  printf("-");
      if(i == 37)
         printf("-\n");
   }
   printf("|        Roberto                      |\n");
   printf("|                                     |\n");
   printf("|        5786                         |\n");
   printf("|                                     |\n");
   printf("|        UNIFEI                       |\n");
   for(int i = 0; i < 38; i++)
   {  printf("-");
      if(i == 37)
         printf("-\n");
   }
   return 0;  
}