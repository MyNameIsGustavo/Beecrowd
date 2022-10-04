/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Figurinhas. 
	ID: 1028
	Status da submissão: ACEITA.
*/


#include <stdio.h>

typedef struct {int num, den;} TRac;

int mdc(int, int);

int main(void)
{	TRac X, Y, R, b;
    int QtdeLoop, x;
    int denominador, numerador;
    int simplifica;
    
    scanf("%d", &QtdeLoop);
    
    x = 1;
    while(x <= QtdeLoop){
    
    scanf("%d %d", &numerador, &denominador);
    
    simplifica = mdc(numerador, denominador);
    printf("%d\n", simplifica);
    x++;
    }
    
	return 0;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}