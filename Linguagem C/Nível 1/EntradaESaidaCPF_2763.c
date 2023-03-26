/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Entrada e saida CPF. 
	ID: 2763
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) 
{   char CPF[14];
    int i;
    
    for(i = 0; i < 14; i++)
    {   scanf("%c", &CPF[i]);   }
    
    printf("%c%c%c\n", CPF[0], CPF[1], CPF[2]);
    printf("%c%c%c\n", CPF[4], CPF[5], CPF[6]);
    printf("%c%c%c\n", CPF[8], CPF[9], CPF[10]);
    printf("%c%c\n", CPF[12], CPF[13]);
    
    return 0;
}