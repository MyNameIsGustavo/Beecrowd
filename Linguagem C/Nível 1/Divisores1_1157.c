/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Divisores 1. 
	ID: 1157
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main(void)
{   int numeros, aux, divisores;
    scanf("%d",&numeros);
    
    for(aux = 1; aux <= numeros; aux++)
    {   divisores = numeros % aux;
        if(divisores == 0)
        {   printf("%d\n",aux);  }
    }
    return 0;
}