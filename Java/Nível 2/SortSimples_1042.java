/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: Java.
	Nome do exercício: Sort Simples. 
	ID: 1042
	Status da submissão: ACEITA.
*/


import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int vetor[] = new int[3];
        int vetorAuxiliar[] = new int[3];
        
        for(int i = 0; i < vetor.length; i++){
            vetor[i] = entrada.nextInt();
            vetorAuxiliar[i] = vetor[i];
        }
        
        Arrays.sort(vetorAuxiliar);
        
        for(int i = 0; i < vetorAuxiliar.length; i++){
            System.out.println(vetorAuxiliar[i]);
        }
        
        System.out.println();
        
        for(int i = 0; i < vetor.length; i++){
            System.out.println(vetor[i]);
        }
    }
}