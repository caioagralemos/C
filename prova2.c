#include <stdio.h>

int main(){
    int m;
    m = 2;
    int n;
    scanf("%d", &n);
    int mapa[m][n];
    int cm = 0;
    int cn = 0;
    int bloqueio = 0;

    for (int h = 0; h < m; h++) {

        for (int g = 0; g < n; g++){
            scanf(" %d", &mapa[h][g]);
        }
    }

        for (int cont = 1; cont < n; cont++){
        if (mapa[0][cont] == 1 && mapa[1][cont] == 1){
            bloqueio++;
            break;
        }
    } 

    for (int contador = 0; contador < 20; contador++){
        
    if (bloqueio > 0){
        printf("existe um bloqueio!\n");
        break;
    }
        
     if (mapa[0][n-1] == 1 && mapa[1][n-1] == 1){
        printf("existe um bloqueio!\n");
        break;
    }

    if (cm < 0){
        cm = 0;
    }

    if (cn < 0){
        cn = 0;
    }

    if (cm == 1 && cn == (n-1)){
        printf("precisamos de %d movimentos\n", contador);
        break;
    }
    else if (cn != (n-1) && mapa[cm][cn+1] == 0){
        cn++;
    }
    else if (cm == 0 && mapa[1][cn] == 0){
        cm++;
    }
    else if (cm > 0 && mapa[cm-1][cn] == 0)
    {
        cm--;
    }
    else {
        printf("existe um bloqueio!\n");
        break;
    }

}

}