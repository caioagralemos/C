#include <stdio.h>

int main (){

int m, n;

while (scanf("%d %d", &m, &n) != EOF){
    getchar();
    
int mm, mn, ff;    
int ml[3];
int nl[3];
int f[3];
int contadorm = 0;
int contadorn = 0;
int mf = 0;
int nf = 0;
mm = 0;
mn = 0;
ff = 0;
char mat[m][n];


for (int h = 0; h < m; h++) {

    for (int g = 0; g < n; g++){
        scanf("%c", &mat[h][g]);
    }
    getchar();
}
    for (int h = 0; h < m; h++) {

    for (int g = 0; g < n; g++){
        if (mat[h][g] != '-'){
            if (mat[h][g] == 'l' || mat[h][g] == 'L'){
                ml[contadorm] = h;
                nl[contadorn] = g;
                contadorm++;
                contadorn++;

            } else if (mat[h][g] == 'm' || mat[h][g] == 'M'){
                mm = h;
                mn = g;
            }
            }

        }

    }

    for (int count = 0; count < 3; count++){
        if (mm >= ml[count] && mn >= nl[count]){
            f[count] = (mm - ml[count]) + (mn - nl[count]);
        }
        else if (mm <= ml[count] && mn >= nl[count]){
            f[count] = (ml[count] - mm) + (mn - nl[count]);
        }
        else if (mm >= ml[count] && mn <= nl[count]){
            f[count] = (mm - ml[count]) + (nl[count] - mn);
        }
         else if (mm <= ml[count] && mn <= nl[count]){
            f[count] = (ml[count] - mm) + (nl[count] - mn);
        }
    }

if (f[0] < f[1] && f[0] < f[2]){
    ff = f[0];
    mf = ml[0];
    nf = nl[0];
}
else if (f[1] < f[0] && f[1] < f[2]){
    ff = f[1];
    mf = ml[1];
    nf = nl[1];
}
else if (f[2] < f[0] && f[2] < f[1]){
    ff = f[2];
    mf = ml[2];
    nf = nl[2];
}

if (ff > 0 && ff <= 8) {
    printf("MARQUINHOS SERA APROVADO! Coordenadas: (%d,%d)\n", mf, nf);
} else {
    printf("AINDA TEM A FINAL :(\n");
}

}
    return 0;
}
