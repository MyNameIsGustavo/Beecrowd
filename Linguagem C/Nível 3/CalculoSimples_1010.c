/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Calculo Simples. 
	ID: 1010
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main (void)
{	int ID_Peca1, ID_Peca2;
	int NumPeca1, NumPeca2;
	float ValPeca1, ValPeca2;
	float Soma1, Soma2, Resultado;

	scanf("%d %d %f", &ID_Peca1, &NumPeca1, &ValPeca1);
	scanf("%d %d %f", &ID_Peca2, &NumPeca2, &ValPeca2);
	
	Soma1 = NumPeca1 * ValPeca1;
	Soma2 =	NumPeca2 * ValPeca2;
	
	Resultado = Soma1 + Soma2;
	
	printf("VALOR A PAGAR: R$ %.2f\n", Resultado);
	
	return 0;
}