#include <stdio.h>

int main() {

    int p, e;
    scanf ("%d", &p);
    scanf ("%d", &e);
    int matriz[e][p];
    int total [p];
    
for (int cont = 0; cont < p; cont++) {
    total[cont] = 0;
}

for (int h = 0; h < e; h++) {

    for (int g = 0; g < p; g++){
        scanf("%d", &matriz[h][g]);

        if (matriz[h][g] == 1){
            total[g]++;
        }
    }
}


    for (int contador = 0; contador < p; contador++) {
        printf("Princesa %d: %d voto(s)\n", contador+1, total[contador]);
    }

    return 0;
}