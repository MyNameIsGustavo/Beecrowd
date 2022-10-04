/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Churras no Yuri. 
	ID: 2633
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define 	TAM 	21
#define 	TRUE	1
#define 	FALSE	0

/*Prot Função Aux QSORT do C.*/
int comp(const void *, const void *);

struct Info {char NomeCarne[TAM]; int DiasVal; };

int main(void)
{	int QtdeTeste;
    int AuxFor, SegAuxFor;
    
    while(scanf("%d", &QtdeTeste) != EOF)
    {	struct Info Conv[QtdeTeste];
    
        for (AuxFor = 0; AuxFor < QtdeTeste; AuxFor++)
        {	scanf("%s %d", Conv[AuxFor].NomeCarne, &Conv[AuxFor].DiasVal);	}
        
        /*Função QSORT do C*/
        qsort(Conv, QtdeTeste, sizeof(struct Info), comp);
        
        for (SegAuxFor = 0; SegAuxFor < QtdeTeste; SegAuxFor++)
        {	if (SegAuxFor != 0 && SegAuxFor != QtdeTeste)
				printf(" ");
			printf("%s", Conv[SegAuxFor].NomeCarne);
        }
		printf("\n");
    }
    return 0;
}

/*Função AUX QSORT*/
int comp(const void *a, const void *b )
{	struct Info *x = (struct Info*)a;
    struct Info *y = (struct Info*)b;

    if (x->DiasVal < y->DiasVal)
        return -1;
    else if (x->DiasVal == y->DiasVal)
        return 0;
    else
        return 1;
}