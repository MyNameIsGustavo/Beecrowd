/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: As abas de Péricles. 
	ID: 2061
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>

int main (void) 
{   int aux, abasinicial, acoes;
    char descr[6];
    
    scanf("%d %d", &abasinicial, &acoes);
    
    for(aux = 0; aux < acoes; aux++)
    {   scanf("%s", descr);
    
        if(strcmp(descr, "fechou") == 0)
        {   abasinicial++;     }
        else
            {   abasinicial--;     }
    }   
    
    printf("%d\n", abasinicial);
    
    return 0;
}