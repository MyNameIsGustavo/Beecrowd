/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Trigo no tabuleiro. 
	ID: 1169
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{  int qtdeTeste, auxWhile, qtdeQuadrados;
   unsigned long long graosGrama, graosKG;
   
   scanf("%d", &qtdeTeste);
   
   auxWhile = 0; 
   while(auxWhile < qtdeTeste)
   {  scanf("%d", &qtdeQuadrados);
      if(qtdeQuadrados == 64)
         printf("1537228672809129 kg\n");
      else
      {  graosGrama = pow(2, qtdeQuadrados);
         graosKG = (graosGrama / 12000);
         printf("%llu kg\n", graosKG);
      }
   auxWhile++;
   }
   return 0;
}