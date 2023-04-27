/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Problema com a calculadora. 
	ID: 2694
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     TRUE              1
#define     FALSE             0
#define     ConverteASCII     48

int main(void) 
{  int qtdeTestes, soma, primeiraParteInteiro, segundaParteInteiro, terceiraParteInteiro;
   char relatorio[15], primeiraParte[3], segundaParte[4], terceiraParte[3];

   scanf("%d", &qtdeTestes);

   while(qtdeTestes--)
   {  scanf("%s", relatorio);
      
      relatorio[14] = '\0';
      
      strncpy(primeiraParte, &relatorio[2], 2);
      primeiraParte[2] = '\0';
      primeiraParteInteiro = atoi(primeiraParte);
      
      strncpy(segundaParte, &relatorio[5], 3);
      segundaParte[3] = '\0';
      segundaParteInteiro = atoi(segundaParte);
      
      strncpy(terceiraParte, &relatorio[11], 2);
      terceiraParte[2] = '\0';
      terceiraParteInteiro = atoi(terceiraParte);
      
      soma = primeiraParteInteiro + segundaParteInteiro + terceiraParteInteiro;
      printf("%d\n", soma);
   }
   return 0;
}