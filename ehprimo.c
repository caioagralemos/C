#include <stdio.h>

int ehprimo(int a, int n)
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
            n++;
            ehprimo(a, n);
        }
    }
    else {
    return 1;
    }

}

void cousin() {

    int a, n;


    scanf ("%d", &a);

    if (a != -1) {
    int Z = ehprimo(a, 2);
    printf ("%d\n", Z);
    cousin ();
    }



    

}

int main()
{

   cousin();

}