/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Top N. 
	ID: 1943
	Status da submissão: ACEITA.
*/

#include <stdio.h>

int main(void)
{   int posicao;
    
    scanf("%d", &posicao);
    
    if(posicao <= 1)
    {   puts("Top 1");   }
    
    else if (posicao > 1 && posicao <= 3)
        { puts("Top 3");   }  
        
        else if (posicao > 3 && posicao <= 5)
            { puts("Top 5");   }
            
            else if (posicao > 5 && posicao <= 10)
                { puts("Top 10");   }
                
                else if (posicao > 10 && posicao <= 25)
                    { puts("Top 25");   }
                    
                    else if (posicao > 25 && posicao <= 50)
                        { puts("Top 50");   }
                        
                        else if (posicao > 50 && posicao <= 100)
                            { puts("Top 100");   }
                            
    return 0;
}