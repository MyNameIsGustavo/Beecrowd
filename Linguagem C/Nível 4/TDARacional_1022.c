/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: TDA Racional. 
	ID: 1022
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {int num, den;} TRac;

TRac SomaRac(TRac, TRac);
TRac SubtraiRac(TRac, TRac);
TRac MultRac(TRac, TRac);
TRac DivRac(TRac, TRac);
TRac SimplRac(TRac);
int mdc(int, int);

int main(void)
{	TRac X, Y, R, b;
    char Operador;
    int AuxFor, QtdeTeste;
    
    scanf("%d", &QtdeTeste);
    
    for(AuxFor = 0; AuxFor < QtdeTeste; AuxFor++)
    {   scanf("%d / %d %c %d / %d", &X.num, &X.den, &Operador, &Y.num, &Y.den);
    
    	switch (Operador)
    	{   
    	    case '+':
    	    b = SomaRac(X, Y);
    	    R = SimplRac(b);
        	printf("%d/%d = %d/%d\n", b.num, b.den, R.num, R.den);
        	break;
        	
        	case '-':
        	b = SubtraiRac(X, Y);
        	R = SimplRac(b);
        	printf("%d/%d = %d/%d\n", b.num, b.den, R.num, R.den);
        	break;
        	
        	case '*':
        	b = MultRac(X, Y);
        	R = SimplRac(b);
        	printf("%d/%d = %d/%d\n", b.num, b.den, R.num, R.den);
        	break;
        	
        	case '/':
        	b = DivRac(X, Y);
        	R = SimplRac(b);
        	printf("%d/%d = %d/%d\n", b.num, b.den, R.num, R.den);
        	break;
    	}
    }
	return 0;
}

TRac SomaRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac SubtraiRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den - n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac MultRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.num;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac DivRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den;
	res.den = n2.num * n1.den;
	
	return res;
}

TRac SimplRac(TRac n1)
{	TRac res;

	res.num = n1.num / mdc(n1.num, n1.den);
	res.den = n1.den / mdc(n1.num, n1.den);
	
	return res;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}