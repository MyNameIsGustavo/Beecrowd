/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: O Bravo Guerreiro HashMat. 
	ID: 1198
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define     TRUE        1
#define     FALSE       0

int main(void)
{   long long int Num1, Num2, Resultado;

    while(scanf("%lld %lld", &Num1, &Num2)!=EOF)
    {   if(Num1 >= Num2)
        {   Resultado = Num1 - Num2;
            printf("%lld\n", Resultado);     
        }
        else if(Num2 > Num1)
        {   Resultado = Num2 - Num1;
            printf("%lld\n", Resultado);
        }
    }
    
    return 0;
}