/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Rodizio veicular. 
	ID: 2712
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define        TRUE     1
#define        FALSE    0

int validaPlaca(char[]);
int validaLetras(char[]);
int validaNumeros(char[]);
void imprimeDiaDaSemana(char[]);

int main (void)
{	int qtdeTeste;
	char placa[101]; 
	
	placa[100] = '\0';
	
	scanf("%d", &qtdeTeste);
	while(qtdeTeste--)
	{	scanf("%s", placa);
		if((validaPlaca(placa) == FALSE) || validaLetras(placa) == FALSE || (validaNumeros(placa) == FALSE))
			puts("FAILURE");
		else
			imprimeDiaDaSemana(placa);
	}
	
}

int validaPlaca(char placa[])
{	if(strlen(placa) != 8 || placa[3] != '-')
		return FALSE;
	
	return TRUE;
}

int validaLetras(char placa[])
{	int letrasPlaca;
	letrasPlaca = 0;
	
	for(int i = 0; i < strlen(placa); i++)
	{	if(isalpha(placa[i]))
			letrasPlaca++;
	}
	if(letrasPlaca != 3)
		return FALSE;
	
	return TRUE;
}

int validaNumeros(char placa[])
{	int numerosPlaca;
	numerosPlaca = 0;
	
	for(int i = 0; i < strlen(placa); i++)
	{	if(isdigit((int)placa[i]))
			numerosPlaca++;
	}
	if(numerosPlaca != 4)
		return FALSE;
	
	return TRUE;
}

void imprimeDiaDaSemana(char placa[])
{	char ultimoDigito = placa[7];
	int valorDiaSemana = atoi(ultimoDigito);
	
	if(valorDiaSemana == 1 || valorDiaSemana == 2)
		puts("MONDAY");
	else 
		if(valorDiaSemana == 3 || valorDiaSemana == 4)
			puts("TUESDAY");
		else 
			if(valorDiaSemana == 5 || valorDiaSemana == 6)
				puts("WEDNESDAY");
			else
				if(valorDiaSemana == 7 || valorDiaSemana == 8)
					puts("THURSDAY");
				else
					if(valorDiaSemana == 9 || valorDiaSemana == 0)
						puts("FRIDAY");
}