#include <stdio.h>

int main (){

int n, sdp, st, menor, deltinha, d;
n = 3;
int mat[n][n];
double media;
media = 0;
sdp = 0;
st = 0;
d = 0;

for (int h = 0; h < n; h++) {

    for (int g = 0; g < n; g++){
        scanf("%d", &mat[h][g]);

        if (mat[h][g] > 0) {
        media = media + mat[h][g];
        d++;
        }

        if (h == 0 && g == 0) {
            menor = mat[h][g];
        }
        if (mat [h][g] < menor){
            menor = mat[h][g];
        }

        st = st + mat[h][g];
    }

}

double mf = media / d;


for (int b = 0; b < n; b++) {
    sdp = sdp + mat[b][b];
}

int sf = st - sdp;

if (menor % 2 == 0) {
    deltinha = 1;
} else {
    deltinha = 0;
}



printf("%.2lf %d %d %d\n", mf, menor, deltinha, sf);
  
    return 0;
}