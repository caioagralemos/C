#include <stdio.h>
#include <string.h>

int main() {

    int n, m;
    int morangos, inseticida;
    scanf ("%d", &n);
    scanf ("%d", &m);
    int mat[n][m];
    char comandos [10];
    morangos = 0;
    inseticida = 0;


for (int h = 0; h < n; h++) {

    for (int g = 0; g < m; g++){
        scanf("%d", &mat[h][g]);

    }
}

while (scanf(" %s", comandos) != EOF){

    if (strcmp(comandos, "Plantar") == 0) {

        int linhas, marcador;
        while (scanf("%d", &linhas) == 1){

                for (int g = 0; g < m; g++){
                    if (mat[linhas][g] == 0) {
                       mat[linhas][g] = 1; 
                       inseticida = inseticida + 2;
                    }

    }
}
        }
    else if (strcmp(comandos, "Temporada") == 0) {

        for (int h = 0; h < n; h++) {

            for (int g = 0; g < m; g++){
                
                if (mat[h][g] == 1){
                    mat[h][g]++;
                    inseticida = inseticida + 2;

        }
                else if (mat[h][g] == 2){
                    mat[h][g]++;
                }

                else {
                    continue;
                }

    }
        }
        
    }

    else if (strcmp(comandos, "Colher") == 0) {

        for (int h = 0; h < n; h++) {

            for (int g = 0; g < m; g++){

                if (mat [h][g] == 3){
                    morangos++;
                    mat[h][g] = 0;
                }

                else if (mat [h][g] == -1){
                    mat[h][g] = 0;
                }
            }

        }
    }

    else if (strcmp(comandos, "Ataque") == 0) {

        int k, w;
        scanf ("%d", &k);
        scanf ("%d", &w);

        if (mat[k][w] == 1 || mat[k][w] == 2 || mat[k][w] == 3) {
            mat[k][w] = -1;
        }
    }

}

for (int h = 0; h < n; h++) {

    for (int g = 0; g < m; g++){
        if (h == (n-1) && g == (m-1)) {
            printf("%d\n\n", mat[h][g]);
        }
        else if (g == (m-1)) {
            printf("%d\n", mat[h][g]);
        }
        else {
        printf("%d ", mat[h][g]);
        }

    }
}

printf("Foram colhidos %d morangos.\n", morangos);
printf("Foram utilizados %dml de inseticida.\n", inseticida);



}