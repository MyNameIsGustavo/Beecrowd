/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Entrada e saída de carácter. 
	ID: 2759
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main(void)
{   char A, B, C;

    scanf("%c %c %c", &A, &B, &C);

    printf("A = %c, B = %c, C = %c\n", A, B, C);
    printf("A = %c, B = %c, C = %c\n", B, C, A);
    printf("A = %c, B = %c, C = %c\n", C, A, B);

    return 0;
}