/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Entrada e saida de numeros inteiros. 
	ID: 2757
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{   int varInteiro;
    unsigned char varSemSinal1;
    unsigned short int varSemSinal2;

    scanf("%d", &varInteiro);
    scanf("%hhu", &varSemSinal1);
    scanf("%hu", &varSemSinal2);
    
    printf("A = %d, B = %hhu, C = %hu\n", varInteiro, varSemSinal1, varSemSinal2);
    printf("A = %10d, B = %10hhu, C = %10hu\n", varInteiro, varSemSinal1, varSemSinal2);
    printf("A = %010d, B = %010hhu, C = %010hu\n", varInteiro, varSemSinal1, varSemSinal2);
    printf("A = %-10d, B = %-10hhu, C = %-10hu\n", varInteiro, varSemSinal1, varSemSinal2);

    return 0;
}