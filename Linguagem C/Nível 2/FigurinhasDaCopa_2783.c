/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Figurinhas da copa.
	ID: 2783
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     TRUE     1
#define     FALSE    0

int main(void)
{  
   int numFigurinhas, numCarimbadas, figCompradas;
   int figCarimbada, figPossuida;
   int figFaltaCarimbada = 0;
   int carimbadas[100], album[100];
   
   scanf("%d %d %d", &numFigurinhas, &numCarimbadas, &figCompradas);
   
   for(int i = 1; i <= numFigurinhas; i++){
      carimbadas[i] = 0;
      album[i] = 0;
   }
   
   for(int i = 0; i < numCarimbadas; i++){
      scanf("%d", &figCarimbada);
      carimbadas[figCarimbada] = 1;
   }
   
   for(int i = 0; i < figCompradas; i++){
      scanf("%d", &figPossuida);
      album[figPossuida] = 1;
   }
   
   for(int i = 1; i <= numFigurinhas; i++){
      if(album[i] == 0 && carimbadas[i] == 1){
         figFaltaCarimbada++;
      }
   }
   
   printf("%d\n", figFaltaCarimbada);
   return 0;
}