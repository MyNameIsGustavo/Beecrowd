#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
   for(int i = 0; i < 38; i++)
   {  printf("-");
      if(i == 37)
         printf("-\n");
   }
   for(int i = 0; i < 5; i++) 
   { printf("|");
      for(int i = 0; i < 37; i++) 
         printf(" ");
      printf("|\n");
   }
   for(int i = 0; i < 38; i++)
   {  printf("-");
      if(i == 37)
         printf("-\n");
   }
   return 0;
}