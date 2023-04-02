/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Saida 6. 
	ID: 2752
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{  char frase[51] = "AMO FAZER EXERCICIO NO URI";

   printf("<%s>\n", frase);
   printf("<%30s>\n", frase);
   printf("<%.20s>\n", frase);
   printf("<%-20s>\n", frase);
   printf("<%-30s>\n", frase);
   printf("<%.30s>\n", frase);
   printf("<%30.20s>\n", frase);
   printf("<%-30.20s>\n", frase);

   return 0;
}