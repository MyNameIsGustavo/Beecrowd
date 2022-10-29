/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Java.
	Nome do exercício: Salário. 
	ID: 1008
	Status da submissão: ACEITA.
*/

import java.util.Scanner;

public class Main 
{   public static void main(String[] args)
    {   Scanner dados = new Scanner(System.in);
        
        int ID = dados.nextInt();
        int Horas = dados.nextInt();
        double ValorRecebido = dados.nextFloat();
        
        double Salario = Horas * ValorRecebido;
        
        System.out.printf("NUMBER = %d", ID);
        System.out.printf("\nSALARY = U$ %.2f\n", Salario);
    }
}