/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Triangulos. 
	ID: 2397
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     TRUE     1
#define     FALSE    0

struct valores 
{  int A;
   int B;
   int C;
} typedef TLados;

struct angTriangulo
{  int A;
   int B;
   int C;
} typedef TTringualo;

int isTriangulo(TLados dados);
void tipoTriangulo(TLados dados, TTringualo valores);
void imprimeTriangulo(int);

int main(void) 
{  	TLados dados;
	TTringualo valores;
   
	scanf("%d %d %d", &dados.A, &dados.B, &dados.C);
   
	if (isTriangulo(dados) == FALSE) 
		puts("n");
	else 
		tipoTriangulo(dados, valores);
   
	return 0;
}

int isTriangulo(TLados dados) 
{  	if ((dados.A + dados.B > dados.C) && (dados.A + dados.C > dados.B) && (dados.B + dados.C > dados.A))
		return TRUE;
   
   
	return FALSE;
}

void tipoTriangulo(TLados dados, TTringualo valores) 
{  	valores.A = pow(dados.A, 2);
	valores.B = pow(dados.B, 2);
	valores.C = pow(dados.C, 2);
   
	if (valores.A + valores.B == valores.C || valores.A + valores.C == valores.B || valores.B + valores.C == valores.A) 
		imprimeTriangulo(1);
	else 
		if (valores.A + valores.B < valores.C || valores.A + valores.C < valores.B || valores.B + valores.C < valores.A) 
			imprimeTriangulo(2);
		else 
			imprimeTriangulo(3);
}

void imprimeTriangulo(int valor)
{  	switch(valor)
	{  case 1:
			puts("r");
			break;
		case 2:
			puts("o");
			break;
		case 3:
			puts("a");
			break;
	}
}