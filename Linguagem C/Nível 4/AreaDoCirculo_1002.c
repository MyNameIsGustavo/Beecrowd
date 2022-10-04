/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Área do círculo. 
	ID: 1002
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <math.h>

int main (void)
{	double N, Area;
    double Raio;
	
	N = 3.14159;
	
	scanf("%lf", &Raio);
	
	Area = N  * pow(Raio, 2); 
	
	printf("A=%.4lf\n", Area);
	return 0;
}