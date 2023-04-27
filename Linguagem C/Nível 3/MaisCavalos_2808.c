/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Mais cavalos. 
	ID: 2808
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define        TRUE        1
#define        FALSE       0

int main(void)
{  	char xPosicao1, xPosicao2;
	int yPosicao1, yPosicao2;
	int deslocaX, deslocaY;
   
	scanf("%c%d %c%d", &xPosicao1, &yPosicao1, &xPosicao2, &yPosicao2);
   
	deslocaX = xPosicao1 - xPosicao2;
	if(deslocaX < 0)
		deslocaX = deslocaX * -1;
      
	deslocaY = yPosicao1 - yPosicao2;
	if(deslocaY < 0)
		deslocaY = deslocaY * -1;
   
	if((deslocaX == 2 && deslocaY == 1) || (deslocaX == 1 && deslocaY == 2))
		puts("VALIDO");
	else
		puts("INVALIDO");

	return 0;
}