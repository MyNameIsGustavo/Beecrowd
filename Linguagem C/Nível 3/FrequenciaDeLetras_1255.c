/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Frequência de letras. 
	ID: 1255
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ while(getchar()!='\n');
return;
}

int main(void)
{	char texto[203];
	int N, cont, i, qtdes[26], maior;
	
	scanf("%d", &N);
	LimpaBuffer();
	
	cont = 0;
	while (cont < N)
	{	// recebe a entrada
		fgets(texto, 201, stdin);
		
		// convertendo a entrada para minusculas
		i = 0;
		while (i < 201)
		{	texto[i] = tolower(texto[i]);
	
			i = i + 1;
		}
		
		// inicializando o vetor de qtdes
		i = 0;
		while (i < 26)
		{	qtdes[i] = 0;
			
			i = i + 1;
		}
		
		// processa o texto
		i = 0;
		while (texto[i] != '\0')
		{	if (texto[i] >= 'a' && texto[i] <= 'z')
				qtdes[texto[i] - 'a'] = qtdes[texto[i] - 'a'] + 1;
		
			i = i + 1;
		}

		// Determinando a maior qtde
		maior = 0;
		i = 0;
		while (i < 26)
		{	if (qtdes[i] > maior)
				maior = qtdes[i];
			
			i = i + 1;
		}

		i = 0;
		while (i < 26)
		{	if (qtdes[i] == maior)
				printf("%c", i + 'a');
	
			i = i + 1;
		}
		printf("\n");
		
		cont = cont + 1;
	}
	return 0;
}