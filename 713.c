#include <stdio.h>

int multiplos(int n, int a, int b)
{

    if (a <= b)
    {
        if (a % n == 0) {
            printf("%d\n", a);
            multiplos(n, a + 1, b);
        }
        else {
            multiplos (n, a + 1, b);
        }
        
    }
    else if (n > b)
     {
        printf("INEXISTENTE\n");
    }
    else {
        return 0;
    }
    
}


int main()
{
   int a, b, c, n;
   scanf ("%d\n%d\n%d", &n, &a, &b);
   c = multiplos(n, a, b);

}