/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Quadrado e ao cubo. 
	ID: 1143
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
    vFor++;
	}
	return 0;
}