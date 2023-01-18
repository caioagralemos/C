#include <stdio.h>

int Rickception(int n, int t)
{

    if (t > 0)
    {
        n = n + 3;
        t--;
        
    }
    
    if (t > 0) {
        n = n + (n % 5);
        t--;
    }

    else if (t == 0){
        return n;
    }

    Rickception (n,t);
}


int main()
{
   int n, t, valor;
   scanf ("%d %d", &n, &t);
   valor = Rickception (n,t);
   printf ("%d", valor);

}