/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Mjolnir. 
	ID: 1865
	Status da submissão: ACEITA.
*/
#include <stdio.h>
#include <string.h>

int main (void)
{	int QtdeTeste, AuxFor;
    int Forca;
    char Herois[5];
    
    scanf("%d", &QtdeTeste);
    
    for(AuxFor = 0; AuxFor < QtdeTeste; AuxFor++)
    {   scanf("%s %d", Herois, &Forca);
        if(strcmp(Herois, "Thor") == 0){
            puts("Y");
        }
        else{
            puts("N");
        }
    }
    return 0;
}