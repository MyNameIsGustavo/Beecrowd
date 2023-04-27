/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Área superior. 
	ID: 1187
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define		TRUE		1
#define 	FALSE 		0
int main(void) 
{  char opcao;
   double matriz[12][12], soma;
   int linha, coluna, x, y, cont;

   scanf(" %c", &opcao);

   for(linha = 0; linha < 12; linha++) 
      for (coluna=0; coluna < 12; coluna++) 
         scanf("%lf", &matriz[linha][coluna]);

   x = 1;
   y = 10;
   for (linha = 0; linha < 5; linha++){ 
      for (coluna = x; coluna <= y; coluna++){ 
         soma += matriz[linha][coluna];
         cont++;
      }
      x++;
      y--;
   }

   if(opcao == 'S')
      printf("%.1lf\n", soma);
   else
      printf("%.1lf\n", soma/cont);
   return 0;
}