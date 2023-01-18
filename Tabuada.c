#include <stdio.h>
#include <stdlib.h>

int main()

{
    int tab = 0;

    scanf ("%i", &tab);

    for (int x = 1; x < 10; ++x)

    printf ("%i X %i = %i\n", tab, x, x * tab);
    
    return 0;

}