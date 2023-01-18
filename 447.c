#include <stdio.h>
#include <stdlib.h>

int main()

{ 
  double carros, saida;
    
  scanf ("%lf", &carros);
  
  saida = 73.5 - (carros * 1.75);
  
  printf ("%0.2lf\n", saida);
  
  return 0;

}