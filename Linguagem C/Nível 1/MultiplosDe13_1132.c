/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Multiplo de 13.
	ID: 1132
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{   int x, y, i;
    int resultado, difEntrada;
    
    resultado = 0;
    
    scanf("%d %d", &x, &y);
    difEntrada = x - y;
    
    if(difEntrada > 0){
        for(i = x; i >= y; i--){
            if(i % 13 != 0)
                resultado = resultado + i;
        }
        printf("%d\n", resultado);
    }
    else{
        for(i = x; i <= y; i++){
            if(i % 13 != 0)
                resultado = resultado + i;
        }
        printf("%d\n", resultado);
    }
    return 0;
}