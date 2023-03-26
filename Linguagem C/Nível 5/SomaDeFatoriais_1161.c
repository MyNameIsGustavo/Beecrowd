/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Soma de fatoriais.
	ID: 1161
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{  long long fatValorUm, fatValorDois, resultFatorial;
   unsigned short ValorUm, ValorDois;
   int auxWhile;
   
   while(scanf("%hu %hu", &ValorUm, &ValorDois) != EOF)
   {  fatValorUm = 1;
      fatValorDois = 1;
   
      if(ValorUm == 0)
         {  ValorUm = 1;   }
      else
      {  auxWhile = 1;
         while(auxWhile < ValorUm)
         {  fatValorUm = fatValorUm * ValorUm;
            ValorUm = ValorUm - 1;
         }
      }
      
      if(ValorDois == 0)
         {  ValorDois = 1;    }
      else
      {  auxWhile = 1;
         while(auxWhile < ValorDois)
         {  fatValorDois = fatValorDois * ValorDois;
            ValorDois = ValorDois - 1;
         }
      }
      
      resultFatorial = fatValorUm + fatValorDois;
      printf("%lld\n", resultFatorial);
   }
   return 0;
}
