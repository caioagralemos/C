#include <stdio.h>

int main (){


    // Escreva um programa que l� 3 n�meros X, Y e Z (X < Y e Z >= 1).
    // Em seguida, o programa exibe uma seq��ncia de 1 a Y, com valores incrementados pelo valor de Z,
    // passando para a pr�xima linha a cada X n�meros serem impressos na linha.

    int x, y, z;
    int contador = 0;
    scanf ("%d %d %d", &x, &y, &z);

    if (x < y && z >= 1) {

    for (int numeros = 1; numeros <= y; numeros = numeros + z){

        contador++;
        if (contador == x) {
            printf ("%d\n", numeros);
            contador = 0; }
        else if (contador < x) {
            printf("%d " , numeros);
        }

    }
        
    return 0;

    }

}

