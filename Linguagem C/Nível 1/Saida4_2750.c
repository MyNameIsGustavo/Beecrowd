/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Saida 4. 
	ID: 2750
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{  int dec=0, oct=+0, i;
   char hex[7] = "ABCDEF";

   for(int i = 0; i < 38; i++)
   {  printf("-");
      if(i == 37)
         printf("-\n");
   }
   printf("|  decimal  |  octal  |  Hexadecimal  |\n");
   for(int i = 0; i < 38; i++)
   {  printf("-");
      if(i == 37)
         printf("-\n");
   }

   for ( i=0; i<16; i++ )
   {
      if (oct==8) 
         oct+=2;

      if (oct>9&&oct<12)
         printf("|      %d    |   %d    |       %d       |\n", dec, oct, dec);
      else if (dec<=9)
         printf("|      %d    |    %d    |       %d       |\n", dec, oct, dec);
      else
         printf("|     %d    |   %d    |       %c       |\n", dec, oct, hex[i-10]);
      dec++;
      oct++;
   }
   
   for(int i = 0; i < 38; i++)
   {  printf("-");
      if(i == 37)
         printf("-\n");
   }
   return 0;
}