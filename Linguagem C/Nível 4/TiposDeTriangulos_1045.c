/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Tipos de Triângulos. 
	ID: 1045
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     TRUE     1
#define     FALSE    0

struct valores {
   double A;
   double B;
   double C;
};

int main(void) 
{  struct valores dados;
   double X;
   
   scanf("%lf %lf %lf", &dados.A, &dados.B, &dados.C);

   if (dados.A < dados.B){
      X = dados.A;
      dados.A = dados.B;
      dados.B = X;
   }
   if (dados.B < dados.C){
      X = dados.B;
      dados.B = dados.C;
      dados.C = X;
         if (dados.A < dados.B){
            X = dados.A;
            dados.A = dados.B;
            dados.B = X;
         }
   }

   if (dados.A >= (dados.B + dados.C)) 
      printf("NAO FORMA TRIANGULO\n");
   else 
   {  if (pow(dados.A, 2) == pow(dados.B, 2) + pow(dados.C, 2)) 
            printf("TRIANGULO RETANGULO\n");
        
      if (pow(dados.A, 2) > pow(dados.B, 2) + pow(dados.C, 2)) 
         printf("TRIANGULO OBTUSANGULO\n");
        
      if ((dados.A * dados.A) < ((dados.B * dados.B) + (dados.C * dados.C))) 
         printf("TRIANGULO ACUTANGULO\n");
        
      if (dados.A == dados.B && dados.B == dados.C) 
         printf("TRIANGULO EQUILATERO\n");
        
      if ((dados.A == dados.B && dados.A != dados.C) || (dados.A == dados.C && dados.A != dados.B) || (dados.C == dados.B && dados.A != dados.C)) 
         printf("TRIANGULO ISOSCELES\n");
   }
   return 0;
}
