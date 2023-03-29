/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: C.
	Nome do exercício: Saída 8. 
	ID: 2754
	Status da submissão: ACEITA.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{   double var1, var2;
    
    var1 = 234.345;
    var2 = 45.698;
    
    printf("%.6lf - %.6lf\n", var1, var2);
    printf("%.0lf - %.0lf\n", var1, var2);
    printf("%.1lf - %.1lf\n", var1, var2);
    printf("%.2lf - %.2lf\n", var1, var2);
    printf("%.3lf - %.3lf\n", var1, var2);
    
    printf("%e - %e\n", var1, var2);
    printf("%E - %E\n", var1, var2);
    
    printf("%.3lf - %.3lf\n", var1, var2);
    printf("%.3lf - %.3lf\n", var1, var2);

    return 0;
}
