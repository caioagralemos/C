#include <stdio.h>

int main ()
{
    int n, f, g;

    scanf ("%d %d %d", &n, &f, &g);

    if (n == f && n == g) {
        printf("1");
    } 

    else if (n != f && n != g && g != f) {
        printf("2");
    }

    else if (n == f && n != g) {
        printf("3");
    }

    else if (n == g && n != f) {
        printf("3");
    }

    else if (f == g && n != f) {
        printf("3");
    }
 
    return 0;

}