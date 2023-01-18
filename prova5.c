#include <stdio.h>

int main (){

    int primario, secundario;
    double fator;

        scanf ("%d\n%d\n%lf", &primario, &secundario, &fator);

        if (primario == 1) {
            if (secundario == 1) {
              printf ("Aumenta mais!\n");
            }

            else if (secundario == 2) {
              printf("Legal\n");
            }
        }

        else if (primario == 2) {
            if (secundario == 1) {
              printf ("Essa eh punk\n");
            }

            else if (secundario == 2) {
              printf("Hoje eu choro\n");
            }
        }

        else if (primario == 3) {
            if (secundario == 1) {
              printf ("Aumenta mais!\n");
            }

            else if (secundario == 2) {
              printf("Legal\n");
            }
        }

        if (fator >= 1 && fator <= 4){
            printf(":'(\n");
        }
        else if (fator > 4 && fator <= 7){
            printf("^_^\n");
        }
        else if (fator > 7 && fator <= 10){
            printf("=D\n");
        }




    return 0;
}