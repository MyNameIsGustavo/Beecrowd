/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: OBI URI. 
	ID: 2062
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define        TRUE        1
#define        FALSE       0

int main(void)
{  int qtdeTeste, auxWhile;
   char palavras[21];
   palavras [20] = '\0';
   
   scanf("%d", &qtdeTeste);
   
   auxWhile = 0;
   while(qtdeTeste--)
   {  scanf("%s", palavras);
   
      if (auxWhile > 0)
         printf(" ");
      if(strlen(palavras) == 3 && (palavras[0] == 'O' && palavras[1] == 'B'))
         printf("OBI");
      else if(strlen(palavras) == 3 && (palavras[0] == 'U' && palavras[1] == 'R'))
         printf("URI");
      else
         printf("%s", palavras);
   auxWhile++;
   }
   printf("\n");
   return 0;
}