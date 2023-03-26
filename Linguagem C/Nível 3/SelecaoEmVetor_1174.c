/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Seleção em vetor.
	ID: 1174
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{  float A[100];
   int i;
   
   for(i = 0; i < 100; i++)
      scanf("%f", &A[i]);
   
   for(i = 0; i < 100; i++)
   {  if(A[i] <= 10)
         printf("A[%d] = %.1f\n", i, A[i]);
   }
   
   return 0;
}