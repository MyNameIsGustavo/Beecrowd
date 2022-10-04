/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Tacógrafo. 
	ID: 2388
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main (void)
{	int QtdeTestes;
	int TempoDecorrido;
	int VelocMedia, Resultado;
	int AuxFor;
	
	scanf("%d", &QtdeTestes);
	
	Resultado = 0;
	
	for(AuxFor = 0; AuxFor < QtdeTestes; AuxFor++)
	{	scanf("%d %d", &TempoDecorrido, &VelocMedia);
		Resultado = Resultado + (TempoDecorrido * VelocMedia);
	}
	printf("%d", Resultado);
	return 0;
}