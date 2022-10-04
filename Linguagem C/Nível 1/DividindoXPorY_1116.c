/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Dividindo X por Y. 
	ID: 1116
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main (void)
{   int X, Y;
    int QtdeTeste, AuxFor;
    
    scanf("%d", &QtdeTeste);
    
    for(AuxFor = 0; AuxFor < QtdeTeste; AuxFor++)
    {   scanf("%d %d", &X, &Y);
    
        if(Y == 0){   
            printf("divisao impossivel\n");
        }
        else{   
            printf("%.1f\n", (float)X/Y);   
        }
    }
    return 0;
}