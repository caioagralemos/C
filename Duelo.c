#include <stdio.h>

int main (){

    double vida_inimigo, dano_amigo;
    int nivel_amigo, nivel_inimigo;

    scanf ("%d %lf\n%d %lf", &nivel_amigo, &dano_amigo, &nivel_inimigo, &vida_inimigo);


    if (nivel_amigo < 1 || nivel_inimigo < 1) {
        printf("Nivel abaixo\n");
    }
    else if (nivel_amigo > 20 || nivel_inimigo > 20){
        printf("Nivel acima\n");
    }
    else {
    

    if (nivel_amigo <= 5 && 1 <= nivel_amigo) {
        dano_amigo *= 1.2;
    }
    else if (nivel_amigo <= 10 && 6 <= nivel_amigo) {
        dano_amigo *= 1.5;
    }
    else if (nivel_amigo <= 15 && 11 <= nivel_amigo) {
        dano_amigo *= 1.8;
    }
    else if (nivel_amigo <= 20 && 16 <= nivel_amigo) {
        dano_amigo *= 2.0;
    }

    if (nivel_inimigo <= 5 && 1 <= nivel_inimigo) {
        vida_inimigo *= 1.2;
    }
    else if (nivel_inimigo <= 10 && 6 <= nivel_inimigo) {
        vida_inimigo *= 1.5;
    }
    else if (nivel_inimigo <= 15 && 11 <= nivel_inimigo) {
        vida_inimigo *= 1.8;
    }
    else if (nivel_inimigo <= 20 && 16 <= nivel_inimigo) {
        vida_inimigo *= 2.0;
    }

    double resto = vida_inimigo - dano_amigo;

    if (resto <= 0) {
        printf ("Personagem 1 venceu\nDano causado: %.2lf\n", dano_amigo);
    }
    else if (resto >= 0) {
        printf ("Personagem 2 venceu\nVida restante: %.2lf\n", resto);
    }

    } 

    return 0;
}