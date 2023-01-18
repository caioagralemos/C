#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a, b, c;

    scanf ("%d\n %d\n %d", &a, &b, &c);

    if (a == b && b == c)
    { printf ("%d\n", a); }

    else if (a < b && a < c)
    { printf ("%d\n", a); }

    else if (b < a && b < c)
    { printf ("%d\n", b); }
  
    else if (c < a && c < b)
    { printf ("%d\n", c); }

    else if (a == b && a < c)
    { printf ("%d\n", a); }

    else if (a == b && c < a)
    { printf ("%d\n", c); }

    else if (b == c && c < a)
    { printf ("%d\n", c); }

    else if (b == c && a < c)
    { printf ("%d\n", a); }

    else if (a == c && b < c)
    { printf ("%d\n", b); }

    else if (a == c && c < b)
    { printf ("%d\n", c); }

    return 0;
}