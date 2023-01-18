#include <stdio.h>

int multiplos(int n, int a, int x)
{  
        if (a > n) {
            return x;
        }

        if (n % a == 0) {
           return multiplos(n, a+3, x + 1);
        }
        else {
            return multiplos (n, a + 3, x);
        }


    
}


int main()
{
   int n, resposta;

   scanf ("%d", &n);

   resposta = multiplos(n, 3, 0);

   if (resposta == 0) {
       printf ("O numero nao possui divisores multiplos de 3!\n");
   }
   else {

   printf ("%d\n", resposta);
   
   }

}