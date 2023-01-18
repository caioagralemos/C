 #include <stdio.h>

int mdc(int a, int b)
{

    if (b == 0)
    {
        return a;
        
    }
    else
    {
        return mdc(b, (a % b));
    }
}

void euclides(int r) {

    int a, b;

  
    
    if (r != 0) {
    scanf ("%d %d", &a, &b);
    int N = mdc(a,b);
    printf ("MDC(%d,%d) = %d\n", a, b, N);
    euclides (r - 1);
    }

    

}

int main()
{
   int r;
   scanf ("%d\n", &r);

   euclides(r);

}