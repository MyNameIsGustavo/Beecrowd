/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Minha senha provisória. 
	ID: 2714
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define        TRUE     1
#define        FALSE    0

int validaRA(char[]);
int verificaDigitos(char[], int);
void removeZeros(char[], int);

int main(void)
{  int qtdeTeste;
   char RA[101];
   
   RA[100] = '\0';
   
   scanf("%d", &qtdeTeste);
   while(qtdeTeste--)
   {  scanf("%s", RA);
      
      if((validaRA(RA) == FALSE) || (verificaDigitos(RA, strlen(RA)) == FALSE)){ 
         puts("INVALID DATA");
         continue;
      }
      removeZeros(RA, strlen(RA));
   }
   return 0;
}

int validaRA(char RA[])
{  if((strlen(RA) != 20) || (RA[0] != 'R' && RA[1] != 'A'))
      return FALSE;
  
   return TRUE;
}

int verificaDigitos(char RA[], int tamanhoRA)
{  int contaDigitos;
   
   for(int indiceRA = 2; indiceRA < tamanhoRA; indiceRA++)
   {  if(!isdigit((int)RA[indiceRA]))
         return FALSE;
      if(RA[indiceRA] == 0)
         contaDigitos++;
   }
   if(contaDigitos == 18)
      return FALSE;
   
   return TRUE;
}

void removeZeros(char RA[], int tamanhoRA)
{  int indiceRAValido = 2;
	while(RA[indiceRAValido] == '0' && indiceRAValido < tamanhoRA)
		indiceRAValido++;
	printf("%s\n", RA + indiceRAValido);
}