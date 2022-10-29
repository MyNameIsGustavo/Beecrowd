/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Java.
	Nome do exercício: Esfera. 
	ID: 1011
	Status da submissão: ACEITA.
*/

import java.util.Scanner;

public class Main 
{   public static void main(String[] args)
    {   Scanner entrada = new Scanner(System.in);
    
        Double PI = 3.14159;
        
        Double ValorRaio = entrada.nextDouble();
        Double Esfera = (4/3.0 * PI * Math.pow(ValorRaio,3));
        
        System.out.printf("VOLUME = %.3f\n", Esfera);
    }
}