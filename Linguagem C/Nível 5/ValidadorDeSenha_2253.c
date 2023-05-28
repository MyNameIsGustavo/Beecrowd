/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Validador de senha. 
	ID: 2253
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define        TRUE        1
#define        FALSE       0
#define        MAXIMO      50

int verificaCaracteres(char *);
int verificaLetras(char *);
int verificaNumeros(char *);
int verificaCaracteresEspeciais(char *);

int main(void)
{  char palavra[MAXIMO];
   
   while(fgets(palavra, sizeof(palavra), stdin) != NULL)
   {  palavra[strcspn(palavra, "\n")] = '\0';
   
      if((verificaCaracteres(palavra) && verificaLetras(palavra) && verificaNumeros(palavra) && verificaCaracteresEspeciais(palavra)) == TRUE)
         puts("Senha valida.");
      else
         puts("Senha invalida.");
   }
   return 0;
}

int verificaCaracteres(char * palavra)
{  int comprimento;

   comprimento = strlen(palavra);
   
   if(comprimento >= 6  && comprimento <= 32)
      return TRUE;
   
   return FALSE;
}

int verificaLetras(char * palavra)
{  int contMaiuscula, contMinuscula;
   
   contMinuscula = 0;
   contMaiuscula = 0;
   
   for(int i = 0; i < strlen(palavra); i++)
   {  if(isupper(palavra[i]))
         contMaiuscula++;
      else
         if(islower(palavra[i]))
            contMinuscula++;
   }
   
   if(contMaiuscula > 0 && contMinuscula > 0)
      return TRUE;
   
   return FALSE;
}

int verificaNumeros(char * palavra)
{  int contNumero;
   
   contNumero = 0;
   for(int i = 0; i < strlen(palavra); i++)
      if(isdigit(palavra[i]))
         contNumero++;
   
   if(contNumero > 0)
      return TRUE;
   
   return FALSE;
}

int verificaCaracteresEspeciais(char * palavra)
{  int contCaracteresEspeciais, i;
   
   for(i = 0; i < strlen(palavra); i++)
      if(!isalpha(palavra[i]) && !isdigit(palavra[i]))
         return FALSE;
   
   return TRUE;
}