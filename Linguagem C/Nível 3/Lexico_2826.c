/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Léxico. 
	ID: 2826
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define        TRUE        1 
#define        FALSE       0

void main (void)
{	char palavra1[21];
	char palavra2[21];
   
	palavra1[20] = '\0';
	palavra2[20] = '\0';
   
	scanf("%s", palavra1);
	scanf("%s", palavra2);
   
	if (strcmp(palavra1, palavra2) > 0)
	{	printf("%s\n", palavra2);
		printf("%s\n", palavra1);
	}
	else if (strcmp(palavra1, palavra2) < 0)
	{  printf("%s\n", palavra1);
		printf("%s\n", palavra2);
	}
}