#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int n;

    scanf ("%d",&n);

   if (10 >= n && n >= 0){
       printf("7");
   }

   else if (30 >= n && n >= 11){
       printf("%d\n", (n - 10) + 7);
   }

   else if (100 >= n && n >= 31){
       printf("%d\n", ((n - 30) * 2) + 27);
   }

   else if (1000 >= n && n >= 101){
       printf("%d\n", ((n - 100) * 5) + 167);
   }



    return 0;
}