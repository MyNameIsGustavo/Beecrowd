/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Pedra, papel, Ataque Aéreo. 
	ID: 2031
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     TRUE           1
#define     FALSE          0

int EscolheGanhador(char[], char[]); 

int main(void) 
{  char escolhaJogador1[7];
   char escolhaJogador2[7];
   int qtdeTeste;
   
   escolhaJogador1[6] = '\0';
   escolhaJogador2[6] = '\0';
   
   scanf("%d", &qtdeTeste);
   
   while(qtdeTeste--)
   {  scanf("%s", escolhaJogador1);
      scanf("%s", escolhaJogador2);
      
      switch(EscolheGanhador(escolhaJogador1, escolhaJogador2))
      {  case 0:
         puts("Sem ganhador");
         break;
         
         case 1:
         puts("Ambos venceram");
         break;
         
         case 2:
         puts("Aniquilacao mutua");
         break;
         
         case 3:
         puts("Jogador 1 venceu");
         break;
         
         case 4:
         puts("Jogador 2 venceu");
         break;
      }
   }
   return 0;
}

int EscolheGanhador(char jogadaUm[], char jogadaDois[])
{  if(strcmp(jogadaUm, "pedra") == 0 && strcmp(jogadaDois, "pedra") == 0)
      return 0;
   else if(strcmp(jogadaUm, "papel") == 0 && strcmp(jogadaDois, "papel") == 0)
      return 1;
   else if(strcmp(jogadaUm, "ataque") == 0 && strcmp(jogadaDois, "ataque") == 0)
      return 2;
   else if((strcmp(jogadaUm, "ataque") == 0 && strcmp(jogadaDois, "pedra") == 0) ||
            (strcmp(jogadaUm, "pedra") == 0 && strcmp(jogadaDois, "papel") == 0) ||
            (strcmp(jogadaUm, "ataque") == 0 && strcmp(jogadaDois, "papel") == 0))
      return 3;
   else
      return 4;
}