#include <stdio.h>
#include <stdlib.h>

int main()

{   float ht, s;
    int nf, sh;

    scanf ("%d", &nf);
    scanf ("%d", &sh);
    scanf ("%f", &ht);

    s = sh * ht;

    printf ("NUMBER = %d", nf);
    printf ("\nSALARY = R$ %0.2f", s);
    

    return 0;

}