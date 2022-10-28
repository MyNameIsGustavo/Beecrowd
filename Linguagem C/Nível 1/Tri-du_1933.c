/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Tri-du. 
	ID: 1933
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main(void)
{   int carta1, carta2;
    
    scanf("%d %d", &carta1, &carta2);
    
    if(carta1 > carta2)
        {   printf("%d\n", carta1); }
    else
        {   printf("%d\n", carta2);   }

    return 0;
}