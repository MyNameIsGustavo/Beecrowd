/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Tustin e seu novo dado. 
	ID: 2600
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define     TAM     6 
#define		TRUE	1
#define		FALSE	0

/*Função Aux QSORT*/
int OrdenaQSort(const void *a, const void *b) 
{	if (*(int*)a > *(int*)b) 
	{	return 1;	} 
		else if (*(int*)a < *(int*)b)
		{	return 0;	} 
			else
				{	return -1;	}
}

int main (void)
{	int NumDado[TAM], DadoCORRETO[TAM] = {1, 2, 3, 4, 5, 6}; 
	int QtdeTeste; 
	int AuxFor, AuxWhile;
	int DadoClassico;
	
	scanf("%d", &QtdeTeste);
	
	AuxWhile = 0;
	while(AuxWhile < QtdeTeste)
	{	for(AuxFor = 0; AuxFor < 6; AuxFor++)
		{	scanf("%d", &NumDado[AuxFor]);	}
		
		if(NumDado[0] + NumDado[5] == 7 && NumDado[1] + NumDado[3] == 7 && NumDado[2] + NumDado[4] == 7)
		{	DadoClassico = TRUE; 	}
	
		/*Função de ordenação pronta do C*/
		qsort(NumDado, 6, sizeof(int), OrdenaQSort);
		
		for (AuxFor = 0; AuxFor < 6; AuxFor++)
		{	if (DadoCORRETO[AuxFor] != NumDado[AuxFor])
            {	DadoClassico = FALSE;
                break;
            }
		}
		
		if(DadoClassico == TRUE)
		{	puts("SIM");	}
		else
			{	puts("NAO");	}
		
		DadoClassico = FALSE;
		
	AuxWhile++;
	}
	return 0;
}