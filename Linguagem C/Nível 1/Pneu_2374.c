/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Pneu. 
	ID: 2374
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main (void)
{	int PressDesejada;
	int PressLida;
	int Resultado;
	
	scanf("%d", &PressDesejada);
	scanf("%d", &PressLida);
	
	Resultado = PressDesejada - PressLida;
	
	printf("%d\n", Resultado);
	
	return 0;
}