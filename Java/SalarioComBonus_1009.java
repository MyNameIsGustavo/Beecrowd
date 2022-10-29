/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Java.
	Nome do exercício: Salário com Bônus. 
	ID: 1009
	Status da submissão: ACEITA.
*/

import java.util.Scanner;

public class Main 
{   public static void main(String[] args)
    {   Scanner entrada = new Scanner(System.in);
        
        String Nome = entrada.next();
        
        Double Salario = entrada.nextDouble();
        Double BonusVendas = entrada.nextDouble();
        Double SalarioBonus = (BonusVendas * 0.15) + Salario;
        
        System.out.printf("TOTAL = R$ %.2f\n",SalarioBonus);
    }
}