/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Evento. 
	ID: 2172
	Status da submissão: ACEITA.
*/
#include <stdio.h>

int main (void)
{	int XP, Multiplo, Resultado;
	int AuxWhile;
	
	AuxWhile = 0;
	while(XP != AuxWhile && Multiplo != AuxWhile)
	{   scanf("%d %d", &XP, &Multiplo);
	
	    if(XP == 0 && Multiplo == 0){
	        break;
	    }
	    else
	    {   Resultado = XP * Multiplo;
	        printf("%d\n", Resultado);
	    }
	}
	return 0;
}