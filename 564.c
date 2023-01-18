#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int v, vmax;
    
    scanf ("%d\n %d", &vmax, &v);
    
    if (vmax < v && v <= (1.2 * vmax))
    { printf ("85.13\n4"); }
    
    else if ((1.2 * vmax) < v && v <= (1.5 * vmax))
    { printf ("127.69\n5"); }

    else if ((1.5 * vmax) < v)
    { printf ("574.62\n7"); }
    
    else
    { printf ("0.00\n0"); }

    return 0;
}