/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Identificando o chá. 
	ID: 2006
	Status da submissão: ACEITA.
*/
#include <stdio.h>
//Tipos de chás;
// 1 - Chá Branco;	// 2 - Chá Verde;	// 3 - Chá Preto;	// 4 - Chá De Ervas;

int main (void)
{	int JuradoResposta, TipoCha;
	int Acumulador;
	int AuxWhile;
	
	Acumulador = 0;
	
	scanf("%d", &JuradoResposta);
	
	for(AuxWhile = 0; AuxWhile < 5; AuxWhile++)
	{	scanf("%d", &TipoCha);
			if(JuradoResposta == TipoCha){
				Acumulador = Acumulador + 1;
			}
	}
	printf("%d\n", Acumulador);
	return 0;
}