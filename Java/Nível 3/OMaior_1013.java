/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Java.
	Nome do exercício: O maior. 
	ID: 1013
	Status da submissão: ACEITA.
*/

import java.util.Scanner;

public class Main
{   public static void main(String[] args)
    {   Scanner entrada = new Scanner(System.in);
        
        int A = entrada.nextInt();
        int B = entrada.nextInt();
        int C = entrada.nextInt();
	
		int Formula = (A + B + Math.abs(A-B)) / 2;
		int MaiorNum = (Formula + C + Math.abs(Formula - C)) / 2;
		
		System.out.printf("%d eh o maior\n", MaiorNum);
	}
}