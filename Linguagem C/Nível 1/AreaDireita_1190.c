/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Área direita. 
	ID: 1190
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define			TRUE		1
#define			FALSE 		0

int main(void) 
{	char opcao;
	double matriz[12][12], soma;
	int linha, coluna, y, cont;

	scanf("%c", &opcao);

	for (linha = 0; linha < 12; linha++)
		for (coluna=0; coluna < 12; coluna++)
			scanf("%lf", &matriz[linha][coluna]);
			
	y = 11;
	for (linha=1; linha<11; linha++){
		for (coluna = 11; coluna >= y; coluna--) {
			soma += matriz[linha][coluna];
			cont++;
		}

    if (linha <= 4) 
		y--;
    else if (linha >=6) 
        y++;
    }

	if(opcao == 'S')
		printf("%.1lf\n", soma);
	else       
      printf("%.1lf\n", soma/cont);
	  
   return 0;
}