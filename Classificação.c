#include <stdio.h>
#include <stdlib.h>

int main()
{

int x, y, z;

scanf ("%d\n %d\n %d", &x, &y, &z);

if (x == y && y == z)
{
    printf ("equilatero");
} 

else if (x != z && z != y && x != y)
{
    printf ("escaleno");
} 

else if (x == y || y != z)
{
    printf ("isosceles");
} 

else if (y == z || x != z)
{
    printf ("isosceles");
} 

else if (x == z || x != y)
{
    printf ("isosceles");
} 

return 0;
}