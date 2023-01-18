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



int main()
{
   int a, b, MDC;
   scanf ("%d\n%d", &a, &b);
   mdc(a, b);
   MDC = mdc (a,b);
   printf ("%d", MDC);


}