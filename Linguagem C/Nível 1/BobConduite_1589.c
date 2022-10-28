/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Bob Conduite. 
	ID: 1589
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main(void)
{   int numtestes, aux;
    int R1, R2, menorraio;

    scanf("%d", &numtestes);
    aux = 0;
    while(aux < numtestes)
    {   scanf("%d %d", &R1, &R2);
        menorraio = R1 + R2;
        printf("%d\n", menorraio);
    aux++;
    }

    return 0;
}