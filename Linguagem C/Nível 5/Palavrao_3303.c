/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Palavrão. 
	ID: 3303
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define        TRUE        1
#define        FALSE       0

int contaCaracteres(char *);

int main(void)
{  char palavra[21];
   int contador;
   
   scanf("%s", palavra);
   contador = contaCaracteres(palavra);
   
   if(contador >= 10)
      puts("palavrao");
   else
      puts("palavrinha");

   return 0;
}

int contaCaracteres(char * palavra)
{  int acumulador;
   
   acumulador = 0;
   
   for(int i = 0; i < strlen(palavra); i++)
      acumulador++;
   
   return acumulador;
}