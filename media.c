#include <stdio.h>
#include <stdlib.h>

int main()

{   float a, b, media;

    scanf ("%f", &a);
    scanf ("%f", &b);
   

    media = (a * 3.5 + b * 7.5) / 11;

    printf ("MEDIA = %0.5f", media);
    

    return 0;

}