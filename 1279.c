#include <stdio.h>

int main (){

int n, nn;
scanf ("%d", &n);
int um[n][n];
int dois[n][n];
int resultante [n][n];
nn = n*n;
int contador = 0;

if (n == 0) {
    printf("Vazia\n");
}

for (int h = 0; h < n; h++) {

    for (int g = 0; g < n; g++){
        scanf("%d", &um[h][g]);
    }

}

for (int h = 0; h < n; h++) {

    for (int g = 0; g < n; g++){
        scanf("%d", &dois[h][g]);
    }

}

for (int h = 0; h < n; h++) {

    for (int g = 0; g < n; g++){
        resultante [h][g] = um[h][g] + dois[h][g];
    }

}


    for (int h = 0; h < n; h++) {

        contador++;

    for (int g = 0; g < n; g++){
        if (contador < nn) {
            printf("%d\n", resultante[h][g]); }
        else if (contador == nn) {
            printf("%d\n", resultante[h][g]);
            break;
        }
    }

}

  
    return 0;
}
