/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Batmain. 
	ID: 2510
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>

int main (void)
{	char NomesVilao [26];
	int AuxFor, QtdeTestes;
	
	scanf("%d", &QtdeTestes);

	for(AuxFor = 0; AuxFor < QtdeTestes; AuxFor++)
	{	scanf("%s", NomesVilao);
		
		if(strcmp(NomesVilao, "Pistoleiro") == 0)
		{	puts("Y");	}
		else
		{	puts("N");	}
	
	}
	return 0;
}