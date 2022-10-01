/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Notas da prova. 
	ID: 2344
	Status da submissão: ACEITA.
*/
#include <stdio.h>

int main (void)
{	int Nota;
	
	scanf("%d", &Nota);
	
	if(Nota == 0){
		puts("E");
	}
	else if(Nota >= 1 && Nota <= 35){
		puts("D");
	}
		else if(Nota >= 36 && Nota <= 60){
			puts("C");
		}
			else if(Nota >= 61 && Nota <= 85){
				puts("B");
			}
				else if(Nota >= 86 && Nota <= 100){
					puts("A");
				}
	return 0;
}