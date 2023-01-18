#include <stdio.h>

int ContaDigitosPares(int x, int p)
{
    int r, y;
    if(x < 10)
    {
        r = x%2;
        if(r == 0)
        {
            p = p + 1;
        }
        return p;
    }
    r = x%10;
    y = r%2;
    if(y == 0)
    {
        p = p + 1;
    }
    x = x - r;
    x = x / 10;
    ContaDigitosPares(x, p);
}


int main()
{
    int p, x;
    scanf("%d", &x);
    p = 0;
    ContaDigitosPares (x,0);
    p = ContaDigitosPares(x, p);
    printf("%d", p);
	return 0;
}