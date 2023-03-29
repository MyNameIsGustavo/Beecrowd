/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Trigo no tabuleiro. 
	ID: 1169
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{  int qtdeTeste, auxWhile;
   int qtdeQuadrados, resultadoFinal;
   
   scanf("%d", &qtdeTeste);
   
   auxWhile = 0;
   while(auxWhile < qtdeTeste)
   {  scanf("%d", &qtdeQuadrados);
      
      resultadoFinal = (pow(2, qtdeQuadrados) / 12000);   
      
      printf("%llu kg\n", (long long)resultadoFinal);
      
   auxWhile++;
   }
   return 0;
}