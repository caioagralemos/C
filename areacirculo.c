#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    double r, a;

    scanf ("%lf", &r);

    a = (3.14159 * (r*r)) / 10000;
 
    printf ("Area = %0.4lf", a);

    return 0;

}