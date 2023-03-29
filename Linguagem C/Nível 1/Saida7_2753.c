/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Saída 7. 
	ID: 2753
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{   
    for(int valor = 97; valor <= 122; valor++)
        printf("%d e %c\n", valor, (char)valor);
    
    return 0;
}