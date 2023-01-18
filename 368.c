#include <stdio.h>
#include <stdlib.h>

int main()
{

float salario;

scanf ("%f", &salario);

if (500 < salario)
{
    printf ("%.2f", (salario * 1.1));
} 

else if (300 < salario)
{
    printf ("%.2f", (salario * 1.07));
} 

else {
    printf ("%.2f", (salario * 1.05));
}

return 0;
}