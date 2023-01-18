#include <stdio.h>
#include <stdlib.h>

int main()
{

float pa, pb, pc, media;

scanf ("%f\n %f\n %f", &pa, &pb, &pc);

media = (pa + pb + pc) / 3;

if (media <= 40 && 0 <= media)
{
    printf ("A media do aluno foi %.2f e ele foi REPROVADO", media);
} 

else if (media <= 70 && 40 <= media)
{
    printf ("A media do aluno foi %.2f e ele foi FINAL", media);
} 

else if (media <= 100 && 70 <= media)
{
    printf ("A media do aluno foi %.2f e ele foi APROVADO", media);
} 

else {
    printf ("Media invalida");
}


return 0;
}