/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Quanta mandioca?. 
	ID: 2936
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main (void)
{	int DonaCHICA, Curupira, Boitata, Boto, Mapinguari, Iara;

    int PorCurupira, PorBoitata, PorBoto, PorMapinguari, PorIara;
    
    int SomaCurupira, SomaBoitata, SomaBoto, SomaMapinguari, SomaIara;
    
	int Num, Total, SomaTotal;
	
	DonaCHICA = 225;
	
	Curupira = 300;
	Boitata = 1500;
	Boto = 600;
	Mapinguari = 1000;
	Iara = 150;
	
	SomaTotal = 0;
	
	scanf("%d %d %d %d %d", &PorCurupira, &PorBoitata, &PorBoto, &PorMapinguari, &PorIara);
	
	SomaCurupira = Curupira * PorCurupira;
	SomaBoitata = Boitata * PorBoitata; 
	SomaBoto = Boto * PorBoto;
	SomaMapinguari = Mapinguari * PorMapinguari;
	SomaIara = Iara * PorIara;
	
	Total = SomaCurupira + SomaBoitata + SomaBoto + SomaMapinguari + SomaIara;
	
	SomaTotal = Total + DonaCHICA;
	
	printf("%d\n", SomaTotal);
	return 0;
}