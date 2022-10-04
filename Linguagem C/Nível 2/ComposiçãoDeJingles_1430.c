#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Composição de Jingles. 
	ID: 1430
	Status da submissão: ACEITA.
*/

#include <math.h>

int main(void)
{	char Identificador[203];
	int AuxFor, Acumulador;
	float Total, Duracao;
	
	while(1)
	{	Acumulador = 0;

		scanf("%s", Identificador);
		if(Identificador[0] == '*')
		{		   break;		  }
		
		AuxFor = 0;
		while(AuxFor < strlen(Identificador))
		{	Duracao = 0;
			Total = 0;
			
			while(Identificador[AuxFor] != '/' && AuxFor < strlen(Identificador))
			{	switch(Identificador[AuxFor])
				{	case 'W':
						Duracao = 1;
						break;
					
					case 'H':
						Duracao = 0.5;
						break;
					
					case 'Q':
						Duracao = 0.25;
						break;
						
					case 'E':
						Duracao = 0.125;
						break;
						
					case 'S':
						Duracao = 0.0625;
						break;
						
					case 'T':
						Duracao = 0.03125;
						break;
						
					case 'X':
						Duracao = 0.015625;
						break;
				}
				Total = Total + Duracao;
				AuxFor++;
			}
			if(Total == 1)
			{Acumulador = Acumulador + 1;}
		
		AuxFor++;
		}
		printf("%d\n", Acumulador);
	}
	return 0;
}