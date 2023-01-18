#include <stdio.h>
#include <stdlib.h>

int main()
{

int est, ido;

scanf ("%d\n %d", &est, &ido);

if (est == 1 || ido == 1)
{
    printf ("1");
} 

else if (est == 1 && ido == 1)
{
    printf ("1");
} 

else
{
    printf ("0");
} 


return 0;
}