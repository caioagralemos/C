#include <stdio.h>
#include <stdlib.h>

int main()

{
   int t1, t3;

   scanf ("%d", &t3);

   t1 = 4 * t3;

   if (1 <= t3 <= 1000) {
   printf ("%d\n", t1); }
   else 
   printf ("N�MERO INV�LIDO\n");

   return 0;
}