#include <stdio.h>
#include <stdlib.h>

int main()
{

int x, y;

scanf ("%d %d", &x, &y);

if (x > y) {
    printf ("%d %d", y, x);
}

else if (y > x) {
    printf ("%d %d", x, y);
}

else if (x == y) {
    printf ("%d %d\n", x, y);
}

else {
    printf ("invalido");
}

return 0;
}