#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a, b, c, d, e, abcde;

    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);

    abcde = a*10000 + b*1000 + c*100 + d* 10 + e;

    if (a == e && b == d) {
        printf ("Feldspato, de um esporro no Gabro por mim\n");
    }
    else if (a == 0 && b == 0 && c == e) {
        printf ("Feldspato, de um esporro no Gabro por mim\n");
    }
    else if (abcde % 2 == 0 && abcde % 7 != 0) {
        printf ("Feldspato, va para Gemeo Calido\n");
    }
    else if (abcde % 7 == 0 && abcde % 2 != 0) {
        printf ("Feldspato, va para Gemeo Cinzento\n");
    }
    else if (abcde <= 99999 && abcde >= 50000) {
        printf ("Feldspato, va para Vale Incerto\n");
    }
    else if (abcde <= 49999 && abcde >= 100) {
        printf ("Feldspato, va para Profundezas do Gigante\n");
    }
    else if (abcde < 3 && abcde > 0) {
        printf ("Feldspato, va para Abrolho Sombrio\n");
    }
    else {
        printf("Feldspato, foi um erro de leitura\n");
    }


	return 0;
}