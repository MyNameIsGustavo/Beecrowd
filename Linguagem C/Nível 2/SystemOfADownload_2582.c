/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: System of a download. 
	ID: 2582
	Status da submissão: ACEITA.
*/

#include <stdio.h>
int main(void)
{   int num1, num2, resultado;
    int qtdeloops, vFor;

    scanf("%d", &qtdeloops);
    
    for(vFor = 1; vFor <= qtdeloops; vFor++){
        scanf("%d %d", &num1, &num2);    
        resultado = num1 + num2;
        
        switch (resultado){   
            case 0 :
            printf ("PROXYCITY\n");
            break;
            
            case 1:
            printf ("P.Y.N.G.\n");
            break;
    
            case 2:
            printf ("DNSUEY!\n");
            break;
            
            case 3:
            printf ("SERVERS\n");
            break;
            
            case 4:
            printf ("HOST!\n");
            break;
            
            case 5:
            printf ("CRIPTONIZE\n");
            break;
            
            case 6:
            printf ("OFFLINE DAY\n");
            break;
            
            case 7:
            printf ("SALT\n");
            break;
            
            case 8:
            printf ("ANSWER!\n");
            break;
            
            case 9:
            printf ("RAR?\n");
            break;
            
            case 10:
            printf ("WIFI ANTENNAS\n");
            break;
        }
    }
    return 0;
}