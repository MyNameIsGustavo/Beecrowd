/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Sucessor par. 
	ID: 2679
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main(void)
{   long long int X;
    long long int Resultado;
    
    scanf("%llu", &X);

    if (X % 2 == 0){
        Resultado = X + 2;
        printf("%llu\n", Resultado);
    }
    else{
        Resultado = X + 1;
        printf("%llu\n", Resultado);
    } 
    return 0;
}