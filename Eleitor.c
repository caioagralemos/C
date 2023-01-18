#include <stdio.h>
#include <stdlib.h>

int main()

{ 
  int idade;
    
  scanf ("%d", &idade);
  
  if (16 > idade) {
    printf ("nao eleitor\n");
  }

  if (18 <= idade && idade <= 65) {
    printf ("eleitor obrigatorio\n");
  }

  if (16 <= idade && idade <= 17) {
    printf ("eleitor facultativo\n");
  }

  if (idade > 65) {
    printf ("eleitor facultativo\n");
  }
  
  
  return 0;

}