#include <stdio.h>
#include <stdlib.h>

int main()

{ 
  double a, b, c;
    
  scanf ("%lf", &a);
  scanf ("%lf", &b);
  
  c = (a + b) / 2;
  
  printf ("%0.2lf\n", c);
  
  return 0;

}