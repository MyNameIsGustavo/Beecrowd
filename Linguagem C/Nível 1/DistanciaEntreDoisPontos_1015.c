/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Distancia entre dois pontos. 
	ID: 1015
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <math.h>

int main (void)
{	float X1, Y1;
	float X2, Y2; 
	float Distancia;
	
	scanf("%f %f", &X1, &Y1);
	scanf("%f %f", &X2, &Y2);
	
	Distancia = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));
	
	printf("%.4f\n", Distancia);
	
	return 0;
}