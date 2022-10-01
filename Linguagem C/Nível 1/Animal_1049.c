/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Animal. 
	ID: 1049
	Status da submissão: ACEITA.
*/
#include <stdio.h>
#include <string.h>

int main (void)
{	char TipoAnimalBinario[20];
	char TipoAnimal[20];
	char EvolAnimal [20];
	char UltPossibilidades[20];
	
	scanf("%s", TipoAnimalBinario);
	scanf("%s", TipoAnimal);
	scanf("%s", EvolAnimal);
	
	if(strcmp(TipoAnimalBinario, "vertebrado") == 0)
	{	if (strcmp(TipoAnimal, "ave") == 0)
		{	if(strcmp(EvolAnimal, "carnivoro") == 0)
			{	puts("aguia\n");	}
			else if(strcmp(EvolAnimal, "onivoro") == 0)
			{	puts("pomba\n");	}
		}
		else if(strcmp(TipoAnimal, "mamifero") == 0)
		{	
			if(strcmp(EvolAnimal, "onivoro") == 0)
			{	puts("homem\n");	}
			else if(strcmp(EvolAnimal, "herbivoro") == 0)
			{	puts("vaca\n");	}
		}
	}
	else if(strcmp(TipoAnimalBinario, "invertebrado") == 0)
	{	if (strcmp(TipoAnimal, "inseto") == 0)
		{	if(strcmp(EvolAnimal, "hematofago") == 0)
			{	puts("pulga\n");	}
			else if(strcmp(EvolAnimal, "herbivoro") == 0)
			{	puts("lagarta\n");	}
		}
		else if(strcmp(TipoAnimal, "anelideo") == 0)
		{	
			if(strcmp(EvolAnimal, "hematofago") == 0)
			{	puts("sanguessuga\n");	}
			else if(strcmp(EvolAnimal, "onivoro") == 0)
			{	puts("minhoca\n");	}
		}
	}
	return 0;
}