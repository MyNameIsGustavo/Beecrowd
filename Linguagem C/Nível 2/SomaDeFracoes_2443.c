/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Soma de frações. 
	ID: 2443
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <math.h>

typedef struct {int num, den;} TRac;

TRac SomaRac(TRac, TRac);
TRac SimplRac(TRac);
int mdc(int, int);

int main(void)
{	TRac X, Y, R, b;

	scanf("%d %d %d %d", &X.num, &X.den, &Y.num, &Y.den);
	
	R = SomaRac(X, Y);
	b = R;
	
	R = SimplRac(b);
	printf("%d %d\n", R.num, R.den);

	return 0;
}

TRac SomaRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;
	
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