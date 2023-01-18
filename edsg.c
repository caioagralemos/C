#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c, delta, rum, rdois;

    scanf ("%lf\n %lf\n %lf", &a, &b, &c);

    delta = (b*b) -4*a*c;
    rum = (-b + (sqrt(delta)))/(2*a);
    rdois = (-b - (sqrt(delta)))/(2*a);

    if (a == 0 || b == 0 || c == 0) {
        printf ("NEESG\n");
    }

    else if (delta >= 0) {
        printf ("%0.2lf\n%.2lf", rum, rdois);
    }

    else if (delta < 0) {
        printf ("NRR\n");
    }

    else {
    printf ("NEESG\n");
    }
    
    return 0;
}