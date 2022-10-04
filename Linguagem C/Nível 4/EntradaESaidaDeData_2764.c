/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Entrada e saída de Data. 
	ID: 2764
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main(void)
{   int Dia, Mes, Ano;

    scanf("%d%*c%d%*c%d",&Dia,&Mes,&Ano);

    printf("%.2d/%.2d/%.2d\n",Mes,Dia,Ano);
    printf("%.2d/%.2d/%.2d\n",Ano,Mes,Dia);
    printf("%.2d-%.2d-%.2d\n",Dia,Mes,Ano);

    return 0;
}