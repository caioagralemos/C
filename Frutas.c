#include <stdio.h> 
#include <string.h>

int main(){

    int n, dia, contador;
    double totalkg, totalss;
    scanf ("%d", &n);
    dia = 0;

    for (contador = n; contador > 0; contador--) {
        double bufunfa;
        scanf ("%lf ", &bufunfa);
        char frutas[50];
        fgets (frutas, 50, stdin);
        int espaco, conta;
        conta = 0;
        dia++;
    

        for (espaco = 0; frutas [espaco] != '\0'; espaco++) {
            if (frutas[espaco] == ' ') {
                conta++;
            }
        }

        if (conta != 0) {
            conta = conta + 1;
        } else {
            conta = 1;
        }

        totalkg += conta;
        totalss += bufunfa;

        printf ("dia %d: %d kg\n", dia, conta);



    }


    printf ("%.2lf kg por dia\n", totalkg/n);
    printf ("R$ %.2lf por dia\n", totalss/n);

}