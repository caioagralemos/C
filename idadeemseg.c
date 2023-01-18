#include <stdio.h>
#include <stdlib.h>

int main()

{

    int anos, segundos;  

    scanf ("%d", &anos);
    
    segundos = anos*31536000;

    printf ("%d", segundos);

    return 0;

}