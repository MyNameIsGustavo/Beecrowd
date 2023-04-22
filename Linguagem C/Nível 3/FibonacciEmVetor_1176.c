/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Fibonacci em vetor.
	ID: 1176
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     TRUE     1
#define     FALSE    0

int main(void)
{  int qtdeTeste, auxWhile;
   int numero;
   unsigned long long int Fibonacci[61];
   
   Fibonacci[0] = 0;
   Fibonacci[1] = 1;
   
   for(int i = 2; i < 60; i++)
      Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
   
   scanf("%d", &qtdeTeste);
   auxWhile = 0;
   while(auxWhile < qtdeTeste)
   {  scanf("%d", &numero);
      if(numero == 60)
         printf("Fib(%d) = 1548008755920\n", numero);
      else
         printf("Fib(%d) = %llu\n", numero, Fibonacci[numero]);
   auxWhile++;   
   }
   return 0;
}