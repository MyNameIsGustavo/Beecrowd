/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Tabuada. 
	ID: 1078
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define        TRUE        1
#define        FALSE       0

int calcTabuadaRecursiva(int numero, int valor)
{  int resultado;
   
   resultado = 0;
   if(valor > 10)
      return 0;
   else
   {  resultado = numero * valor;
      printf("%d x %d = %d\n", valor, numero, resultado);
      calcTabuadaRecursiva(numero, valor + 1);
   }
}

int main(void)
{  int numero;

   scanf("%d", &numero);
   calcTabuadaRecursiva(numero, 1);
   
   return 0;
}