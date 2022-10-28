/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Java.
	Nome do exercício: Soma Simples. 
	ID: 1003
	Status da submissão: ACEITA.
*/

import java.util.Scanner;

public class Main 
{   public static void main(String[] args) 
    {   Scanner input = new Scanner(System.in);
        
        int A = input.nextInt();
        int B = input.nextInt();
        int SOMA = A + B;
        
        System.out.println("SOMA = " + SOMA);    
    }
}