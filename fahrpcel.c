#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x;
    float cel;

    scanf ("%d", &x);

    cel = (x - 32) * 0.55555555555;

    printf ("%0.2f", cel);
   
    return 0;

}