#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int nl, an, su;

    scanf ("%d",&nl);

    an = nl - 1;
    su = nl + 1;

    printf ("%d\n%d\n", an, su);

    return 0;
}