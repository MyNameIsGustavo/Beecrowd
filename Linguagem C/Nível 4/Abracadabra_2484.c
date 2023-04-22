/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: ABRACADABRA. 
	ID: 2484
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     TRUE     1
#define     FALSE    0

void ImprimeTrianguloRecursivo(char[], int, int);

int main(void)
{  char palavra[103];
   int tamanhoPalavra;
   
   while(scanf("%s", palavra) != EOF)
   {  tamanhoPalavra = strlen(palavra);
      ImprimeTrianguloRecursivo(palavra, tamanhoPalavra, 0);
      puts("");
   }
   return 0;
}

void ImprimeTrianguloRecursivo(char palavra[], int tamanhoString, int linha)
{  if(linha == tamanhoString)
      return;
   
   for(int i = 0; i < tamanhoString; i++){
      if(i < linha)
         printf(" ");
      else
      {  printf("%c", palavra[i - linha]);
         if(i < tamanhoString - 1)
            printf(" ");
      }
   }
   puts("");
   ImprimeTrianguloRecursivo(palavra, tamanhoString, linha + 1);  
}