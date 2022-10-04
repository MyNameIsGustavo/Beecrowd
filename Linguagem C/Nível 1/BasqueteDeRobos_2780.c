/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Basquete de robôs. 
	ID: 2780
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main (void)
{	int Distancia, Pontos;
	
	scanf("%d", &Distancia);
	
	if(Distancia <= 800)
	{   Pontos = 1;    }
	else if(Distancia > 800 && Distancia <= 1400)
	{   Pontos = 2;    }
    else if(Distancia > 1400 && Distancia <= 2000)
    {	Pontos = 3;    }
    
	printf("%d\n", Pontos);
	
	return 0;
}