#include <stdio.h>

int main (){
    int m, n;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int quadrados = 0;
    scanf ("%d %d", &m, &n);
    int mat[m][n];

    for (int h = 0; h < m; h++) {

        for (int g = 0; g < n; g++){
            scanf("%d", &mat[h][g]);
        }
    }

    for (int h = 0; h < (m - 1); h++) {

        for (int g = 0; g < (n - 1); g++){
            a = mat[h][g];
            b = mat[h][g+1];
            c = mat[h+1][g];
            d = mat[h+1][g+1];

            if (a != b && a != c && a != d && b != c && b != d && c != d) {
                if (a == 1 || a == 2 || a == 3 || a == 0) {
                    if (b == 1 || b == 2 || b == 3 || b == 0) {
                        if (c == 1 || c == 2 || c == 3 || c == 0) {
                            if (d == 1 || d == 2 || d == 3 || d == 0) {
                                quadrados++;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", quadrados);

}