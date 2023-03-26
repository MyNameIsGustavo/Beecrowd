/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Resto da Divisão.
	ID: 1133
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{  int X, Y;
   int testeLoop;
   
   scanf("%d %d", &X, &Y);
   
   if(X > Y)
   {  for(testeLoop = Y + 1; testeLoop < X; testeLoop++)
      {  if(testeLoop % 5 == 2 || testeLoop % 5 == 3)
            printf("%d\n", testeLoop);
      }
   }
   else if(X < Y)
   {  for(testeLoop = X + 1; testeLoop < Y; testeLoop++)
      {  if(testeLoop % 5 == 2 || testeLoop % 5 == 3)
            printf("%d\n", testeLoop);
      }
   }
   return 0;
}