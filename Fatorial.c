#include <stdio.h>

int fat (int n){
    if (n == 1 || n == 0) {
        return 1;
    }
    else {
        return n * fat (n - 1);
    }
}

void fatorial() {

    int n, solucao;
    scanf ("%d", &n);

    if (n != -1) {
        solucao = fat(n);
        printf ("%d\n", solucao);
        fatorial ();
    }

    

}

int main (){

    fatorial ();
    
}