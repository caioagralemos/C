#include <stdio.h>

int eh_triangular (int d, int n) {
    int dd;
    dd = n * (n+1) * (n+2);

    if (dd <= d && d != 0) {

    if (dd == d) {
        printf ("%d * %d * %d = %d\nVerdadeiro\n", n, n+1, n+2, d);
    }

    else {
        return eh_triangular(d, n+1);
    }
    }

    else {
        printf ("Falso\n");
    }

}

int main(){
    int d;
    scanf ("%d", &d);
    eh_triangular (d, 0);
}