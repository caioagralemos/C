#include <stdio.h>

int main (){

int n, nn, sdp, maior, deltinha;
n = 3;
int mat[n][n];
double media;
media = 0;
nn = n*n;

for (int h = 0; h < n; h++) {

    for (int g = 0; g < n; g++){
        scanf("%d", &mat[h][g]);
        media = media + mat[h][g];

        if (h == 0 && g == 0) {
            maior = mat[h][g];
        }
        if (mat [h][g] > maior){
            maior = mat[h][g];
        }
    }

}

double mf = media / nn;

for (int b = 0; b < n; b++) {
    sdp = sdp + mat[b][b];
}

if (maior > 0) {
    deltinha = 1;
} else if (maior == 0) {
    deltinha = 0;
} else if (maior < 0) {
    deltinha = -1;
}


printf("%.2lf %d %d %d\n", mf, maior, deltinha, sdp);
  
    return 0;
}