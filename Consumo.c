#include <stdio.h>
#include <stdlib.h>

int main()

{ 
    double x, y, kml;

    scanf ("%lf", &x);
    scanf ("%lf", &y);

    kml = x/y;

    printf ("%0.3lf km/l", kml);
   
 return 0;
}