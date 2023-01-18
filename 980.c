#include <stdio.h>
#include <stdlib.h>

int main()

{
   float s, s10, s30;
   
   scanf ("%f", &s);

   s10 = s * 1.1;
   s30 = s * 1.3;
 
   
if (1<= s && s <= 1000) {
  printf ("%0.2f\n", s30); }

if (1000<= s && s <= 2000) {
  printf ("%0.2f\n", s10); }
  
 if (s > 2000) {
  printf ("%0.2f\n", s); }
  
return 0;

}
