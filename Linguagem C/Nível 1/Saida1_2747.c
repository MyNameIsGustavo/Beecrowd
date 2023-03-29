/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Saída 1. 
	ID: 2747
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) 
{  int tracinho, barra;

	for(tracinho = 1; tracinho <= 39; tracinho++) 
	   printf("-");
	
	for(barra = 1; barra <= 5; barra++) 
	{  printf("\n");
	
		for(tracinho = 1; tracinho <= 39; tracinho++)
		{  if(tracinho == 1) 
			   printf("|");
			   
			printf(" ");
			
			if(tracinho == 39) 
			   printf("|");
		}
	}
	printf("\n");
	
	for(tracinho = 1; tracinho <= 39; tracinho++) 
	   printf("-");
	  
   return 0;
}