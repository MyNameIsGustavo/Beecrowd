/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Sete. 
	ID: 2590
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{	int QtdeTestes, AuxWhile, UltDigito;
    long long int Numero;

    scanf("%d", &QtdeTestes);
    
	AuxWhile = 0;
    while(AuxWhile < QtdeTestes)
	{	scanf("%lld", &Numero);

        UltDigito = Numero % 4;
		
        if(UltDigito == 0)
		{	printf("1\n");	 }
        else if(UltDigito == 1)
		{	printf("7\n");	  }
		    else if(UltDigito == 2)
			{	printf("9\n");		  }	
				else {	printf("3\n");	}
    AuxWhile++;
    }
    return 0;
}