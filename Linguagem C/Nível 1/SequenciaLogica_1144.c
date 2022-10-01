/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Sequencia lógica. 
	ID: 1144
	Status da submissão: ACEITA.
*/
#include <stdio.h>
#include <math.h>

int main (void)
{	int ResulCUBO, ResulQUADRADO;
	int Num, Cont; 
	int vFor;
	
	Cont = 0;
	
	scanf("%d", &Num);
	
	vFor = 0;
	while(vFor < Num){   
	    Cont = Cont + 1;
        ResulQUADRADO = pow(Cont, 2);
        ResulCUBO = pow(Cont, 3);
		printf("%d %d %d\n", Cont, ResulQUADRADO, ResulCUBO);
		printf("%d %d %d\n", Cont, ResulQUADRADO+1, ResulCUBO+1);
    vFor++;
	}
	return 0;
}