/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Biblioteca pascal. 
	ID: 1267
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define     TRUE     1
#define     FALSE    0

int main(void) 
{  int alumni, jantares, alumniJantou, jantar;

   alumniJantou = FALSE;
   while (TRUE) 
   {  scanf("%d %d", &alumni, &jantares);
      if (alumni == 0 && jantares == 0) 
         break;
   
      int dinners[jantares][alumni];
      for (int linhaMat = 0; linhaMat < jantares; linhaMat++) 
      {  for (int colunaMat = 0; colunaMat < alumni; colunaMat++) 
            scanf("%d", &dinners[linhaMat][colunaMat]);
      }
      
      for (int linhaMat = 1; linhaMat <= alumni; linhaMat++) 
      {  jantar = TRUE;
         for (int colunaMat = 0; colunaMat < jantares; colunaMat++) 
         {  if (dinners[colunaMat][linhaMat - 1] == 0) 
            {  jantar = FALSE;
               break;
            }
         }
         if (jantar == TRUE) 
         {  alumniJantou = TRUE;
            break;
         }
      }
      if(alumniJantou == TRUE)
         puts("yes");
      else
         puts("no");
      
      alumniJantou = FALSE;
   }
   return 0;
}