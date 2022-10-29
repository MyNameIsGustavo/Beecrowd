/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Java.
	Nome do exercício: Área. 
	ID: 1012
	Status da submissão: ACEITA.
*/

import java.util.Scanner;

public class Main
{   public static void main(String[] args)
    {   Scanner entrada = new Scanner(System.in);
        
        Double A = entrada.nextDouble();
        Double B = entrada.nextDouble();
        Double C = entrada.nextDouble();
		
		Double TRIANGULO;
		Double CIRCULO;
		Double TRAPEZIO;
		Double QUADRADO;
		Double RETANGULO;
		
		TRIANGULO = (A/2) * C;
		CIRCULO = 3.14159 * Math.pow(C, 2);
		TRAPEZIO = ((A + B) * C) / 2;
		QUADRADO = Math.pow(B, 2);
		RETANGULO = A * B; 
		
		System.out.printf("TRIANGULO: %.3f\n", TRIANGULO);
		System.out.printf("CIRCULO: %.3f\n", CIRCULO);
		System.out.printf("TRAPEZIO: %.3f\n", TRAPEZIO);
		System.out.printf("QUADRADO: %.3f\n", QUADRADO);
		System.out.printf("RETANGULO: %.3f\n", RETANGULO);
	}
}