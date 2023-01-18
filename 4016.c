#include <stdio.h>

int ehprimokc(int a, int n)
{
    if (a == 1) {
        return 0;
    }

    if (a == 0) {
        return 0;
    }

    if (a == 2) {
        return 1;
    }

    if (a > n)
    {

        if (a % n == 0) {
            return 0;
        }
        else {
            ehprimokc(a, n+1);
        }
    }
    else {
    return 1;
    }

}

int ehprimoor(int b, int n)
{
    if (b == 1) {
        return 0;
    }

    if (b == 0) {
        return 0;
    }

    if (b == 2) {
        return 1;
    }

    if (b > n)
    {

        if (b % n == 0) {
            return 0;
        }
        else {
            ehprimoor(b, n+1);
        }
    }
    else {
    return 1;
    }

}

int fibonaccikc(int a)
{

    if (a == 1)
    {
        return 1;
        
    }
    else if (a == 2)
    {
        return 1;
        
    }
    else if (a == 3)
    {
        return 1;
        
    }
    else if (a == 5)
    {
        return 1;
        
    }
    else if (a == 8)
    {
        return 1;
        
    }
    else if (a == 13)
    {
        return 1;
        
    }
    else if (a == 21)
    {
        return 1;
        
    }
    else if (a == 34)
    {
        return 1;
        
    }
    else if (a == 55)
    {
        return 1;
        
    }
    else if (a == 89)
    {
        return 1;
        
    }
    else if (a == 144)
    {
        return 1;
        
    }
    else if (a == 233)
    {
        return 1;
        
    }
    else if (a == 377)
    {
        return 1;
        
    }
    else if (a == 610)
    {
        return 1;
        
    }
    else if (a == 987)
    {
        return 1;
        
    }
    else if (a == 1597)
    {
        return 1;
        
    }
    else if (a == 2584)
    {
        return 1;
        
    }
    else if (a == 4181)
    {
        return 1;
        
    }
    else if (a == 6765)
    {
        return 1;
        
    }
    else
    {
        return 0;
    }
}

int fibonaccior(int b)
{

    if (b == 1)
    {
        return 1;
        
    }
    else if (b == 2)
    {
        return 1;
        
    }
    else if (b == 3)
    {
        return 1;
        
    }
    else if (b == 5)
    {
        return 1;
        
    }
    else if (b == 8)
    {
        return 1;
        
    }
    else if (b == 13)
    {
        return 1;
        
    }
    else if (b == 21)
    {
        return 1;
        
    }
    else if (b == 34)
    {
        return 1;
        
    }
    else if (b == 55)
    {
        return 1;
        
    }
    else if (b == 89)
    {
        return 1;
        
    }
    else if (b == 144)
    {
        return 1;
        
    }
    else if (b == 233)
    {
        return 1;
        
    }
    else if (b == 377)
    {
        return 1;
        
    }
    else if (b == 610)
    {
        return 1;
        
    }
    else if (b == 987)
    {
        return 1;
        
    }
    else if (b == 1597)
    {
        return 1;
        
    }
    else if (b == 2584)
    {
        return 1;
        
    }
    else if (b == 4181)
    {
        return 1;
        
    }
    else if (b == 6765)
    {
        return 1;
        
    }
    else
    {
        return 0;
    }
}

int perfeito(int r) {

  
    
    if (r != 0) {

        
    int a, b, n;
    int ekc, eor, fkc, fo;
    int pkc, por;
    scanf ("%d %d", &a, &b);
    ekc = ehprimokc(a, 2);
    fkc = fibonaccikc(a);
    eor = ehprimoor (b,2);
    fo = fibonaccior (b);
    
        if (ekc == 1 || fkc == 1) {
            pkc = 1;
        }
        else if (ekc == 1 && fkc == 1) {
            pkc = 3;
        }
        else if (ekc == 0 && fkc == 0) {
            pkc = 0;
        }

        if (eor == 1 || fo == 1) {
            por = 1;
        }
        else if (eor == 1 && fo == 1) {
            por = 3;
        }
        else if (eor == 0 && fo == 0) {
            por = 0;
        }

        if (pkc > por) {
            printf("Kcaj\n");
        }
        else if (por > pkc) {
            printf("Ordep\n");
        }
        else if (pkc == por) {
            if (a > b) {
                printf("Kcaj\n");
            }
            else if (b > a) {
                printf("Ordep\n");
            }
        }





    perfeito (r - 1);
    }

    

}

int main()
{
   int r;
   scanf ("%d\n", &r);

    if (0 < r && r <= 50) {
   perfeito(r);
    }
}