/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: MacPRONALTS. 
	ID: 1985
	Status da submissão: ACEITA.
*/
#include <stdio.h>

struct NumCardapio{float Pedido;};

int main (void)
{	struct NumCardapio Num1001, Num1002, Num1003, Num1004, Num1005;
	int QtdeTeste, AuxWhile;
	int PedidoDesejado, QtdePedido;
	float ValCompra, Resultado;

	ValCompra = 0;
	Resultado = 0;

	Num1001.Pedido = 1.50;
	Num1002.Pedido = 2.50;
	Num1003.Pedido = 3.50;
	Num1004.Pedido = 4.50;
	Num1005.Pedido = 5.50;

	scanf("%d", &QtdeTeste);
	
	AuxWhile = 0;
	while(AuxWhile < QtdeTeste)
	{	scanf("%d %d", &PedidoDesejado, &QtdePedido);
	
		if(PedidoDesejado == 1001){
			ValCompra = Num1001.Pedido * QtdePedido;
		}
		else if(PedidoDesejado == 1002){
			ValCompra = Num1002.Pedido * QtdePedido;
		}
			else if(PedidoDesejado == 1003){
				ValCompra = Num1003.Pedido * QtdePedido;
			}
				else if(PedidoDesejado == 1004){
					ValCompra = Num1004.Pedido * QtdePedido;
				}
					else if(PedidoDesejado == 1005){
						ValCompra = Num1005.Pedido * QtdePedido;
					}
	Resultado = Resultado + ValCompra;
	AuxWhile++;
	}
	printf("%.2f\n", Resultado);

	return 0;
}