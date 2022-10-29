/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Java.
	Nome do exercício: Diferença. 
	ID: 1007
	Status da submissão: ACEITA.
*/

import java.util.Scanner;

public class Main 
{   public static void main(String[] args) 
    {   Scanner input = new Scanner(System.in);
        
        int A = input.nextInt();
        int B = input.nextInt();
        int C = input.nextInt();
        int D = input.nextInt();
        int DIFERENCA = (A * B - C * D);
        
        System.out.println("DIFERENCA = " + DIFERENCA);
        
        input.close();
    }
}
