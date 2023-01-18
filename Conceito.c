#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double livros, alunos, md;

    scanf ("%lf\n %lf", &livros, &alunos);

    md = alunos / livros;

    if (md <= 8)
    { printf ("A\n"); }

    else if (9 <= md && md <= 12)
    { printf ("B\n"); }

    else if (13 <= md && md <= 18)
    { printf ("C\n"); }
  
    else if (18 < md)
    { printf ("D\n"); }
    
    return 0;
}
