/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Soma Natural. 
	ID: 1805
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define     TRUE        1
#define     FALSE       0

int main(void)
{   long long int Num1, Num2;
    long long int Soma;

    scanf("%lld %lld", &Num1, &Num2);
    
    Soma = (Num2 - Num1 + 1) * (Num1 + Num2) / 2;
    
    printf("%lld\n", Soma);
    return 0;
}