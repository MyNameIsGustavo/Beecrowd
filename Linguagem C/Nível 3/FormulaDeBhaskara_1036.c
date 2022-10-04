/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Fórmula de Bhaskara. 
	ID: 1036
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <math.h>

int main(void) 
{   double A, B, C, Delta;

    scanf("%lf%lf%lf", &A, &B, &C);
    
    Delta = pow(B, 2) - 4 * A * C;

    if (Delta <= 0 || A == 0) {
        printf("Impossivel calcular\n");
    } 
    else{
        printf("R1 = %.5lf\n", (-B + sqrt( Delta )) / (2 * A));
        printf("R2 = %.5lf\n", (-B - sqrt( Delta )) / (2 * A));
    }

    return 0;
}