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
			{	puts("aguia");	}
			else if(strcmp(EvolAnimal, "onivoro") == 0)
			{	puts("pomba");	}
		}
		else if(strcmp(TipoAnimal, "mamifero") == 0)
		{	
			if(strcmp(EvolAnimal, "onivoro") == 0)
			{	puts("homem");	}
			else if(strcmp(EvolAnimal, "herbivoro") == 0)
			{	puts("vaca");	}
		}
	}
	else if(strcmp(TipoAnimalBinario, "invertebrado") == 0)
	{	if (strcmp(TipoAnimal, "inseto") == 0)
		{	if(strcmp(EvolAnimal, "hematofago") == 0)
			{	puts("pulga");	}
			else if(strcmp(EvolAnimal, "herbivoro") == 0)
			{	puts("lagarta");	}
		}
		else if(strcmp(TipoAnimal, "anelideo") == 0)
		{	
			if(strcmp(EvolAnimal, "hematofago") == 0)
			{	puts("sanguessuga");	}
			else if(strcmp(EvolAnimal, "onivoro") == 0)
			{	puts("minhoca");	}
		}
	}
	return 0;
}