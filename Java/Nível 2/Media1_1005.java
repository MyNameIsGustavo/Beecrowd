/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Java.
	Nome do exercício: Média 1. 
	ID: 1005
	Status da submissão: ACEITA.
*/

import java.util.Scanner;

public class Main 
{   public static void main(String[] args) 
    {   Scanner entrada = new Scanner(System.in);
    
        double A = entrada.nextDouble();
        double B = entrada.nextDouble();
        double MEDIA = ((A/11*3.5) + (B/11*7.5));
        
        System.out.printf("MEDIA = %.5f\n", MEDIA);
    }
}