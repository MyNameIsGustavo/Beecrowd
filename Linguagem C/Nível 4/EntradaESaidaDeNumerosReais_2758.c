/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Entrada e saida de números reais. 
	ID: 2758
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{   float varPrecSimples1, varPrecSimples2;
    double varPrecDupla1, varPrecDupla2;
    
    scanf("%f %f", &varPrecSimples1, &varPrecSimples2);
    scanf("%lf %lf", &varPrecDupla1, &varPrecDupla2);
    
    printf("A = %f, B = %f\n", varPrecSimples1, varPrecSimples2);
    printf("C = %lf, D = %lf\n", varPrecDupla1, varPrecDupla2);
    
    printf("A = %.1f, B = %.1f\n", varPrecSimples1, varPrecSimples2);
    printf("C = %.1lf, D = %.1lf\n", varPrecDupla1, varPrecDupla2);
    
    printf("A = %.2f, B = %.2f\n", varPrecSimples1, varPrecSimples2);
    printf("C = %.2lf, D = %.2lf\n", varPrecDupla1, varPrecDupla2);
    
    printf("A = %.3f, B = %.3f\n", varPrecSimples1, varPrecSimples2);
    printf("C = %.3lf, D = %.3lf\n", varPrecDupla1, varPrecDupla2);
    
    printf("A = %.3E, B = %.3E\n", varPrecSimples1, varPrecSimples2);
    printf("C = %.3E, D = %.3E\n", varPrecDupla1, varPrecDupla2);
    
    printf("A = %.f, B = %.f\n", varPrecSimples1, varPrecSimples2);
    printf("C = %.lf, D = %.lf\n", varPrecDupla1, varPrecDupla2);

    return 0;
}