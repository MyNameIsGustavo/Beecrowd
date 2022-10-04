/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Escala de cinza. 
	ID: 2630
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>

int CalcRGB (int, int, int);
int CalcMedia (int, int, int);
int CalcMax (int, int, int);
int CalcMin (int, int, int);

int main (void){ 
    int QtdeTestes;
    int R, G, B, x;
    char TipoCalc [5];
    int RtnCalcRGB, RtnCalcMedia, RtnCalcMax, RtnCalcMin;

    scanf("%d", &QtdeTestes);
    
    x = 1;
    while(x <= QtdeTestes){
        scanf("%s", TipoCalc);
        scanf("%d %d %d", &R, &G, &B);
        
        if(strcmp(TipoCalc, "eye") == 0){
            RtnCalcRGB = (CalcRGB(R, G, B));
            printf("Caso #%d: %d\n", x, RtnCalcRGB);
        }
            else if(strcmp(TipoCalc, "mean") == 0){
                RtnCalcMedia = (CalcMedia(R, G, B));
                printf("Caso #%d: %d\n", x, RtnCalcMedia);
            }
                else if(strcmp(TipoCalc,"max") == 0){
                    RtnCalcMax = (CalcMax(R, G, B));
                    printf("Caso #%d: %d\n", x, RtnCalcMax);
                }
                    else if(strcmp(TipoCalc,"min") == 0){
                        RtnCalcMin = (CalcMin(R, G, B));
                        printf("Caso #%d: %d\n", x, RtnCalcMin);
                    }
        x++;
    }
}

int CalcRGB (int R, int G, int B)
{   int P;
    P = 0.30 * R + 0.59 * G + 0.11 * B;
    return P;
}
    
int CalcMedia(int R, int G, int B)
{   int M;
    
    M = (R + G + B) / 3;
    return M;
}

int CalcMax (int R, int G, int B){
    int Max;
    
    if(R >= G && R >= B){
        Max = R;
    }
    else if(G >= R && G >= B){
        Max = G;
    }else{
        Max = B;
    }
    return Max;
}

int CalcMin (int R, int G, int B){
    int Min;
    
    if(R <= G && R <= B){
        Min = R;
    }
    else if(G <= R && G <= B){
        Min = G;
    }else{
        Min = B;
    }
    
    return Min;
}