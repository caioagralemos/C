#include <stdio.h>

int main(){

int a, b, c;

scanf ("%d\n%d\n%d", &a, &b, &c);

// Durante a semana
if (1 <= a && 4 >= a){

    // Estudante
    if (b == 1) {
        printf("ESTUDANTE: R$ 10.50\n");
    }

    // S�cio
    else if (c == 1) {
        printf("SOCIO: R$ 15.00\n");
    }

    // Comum
    else {
        printf("COMUM: R$ 15.00\n");
    }

}

// Fim de semana
else if (5 <= a && 7 >= a){
    
    // Estudante
    if (b == 1) {
        printf("ESTUDANTE: R$ 21.00\n");
    }

    // S�cio
    else if (c == 1) {
        printf("SOCIO: R$ 24.00\n");
    }

    // Comum
    else {
        printf("COMUM: R$ 30.00\n");
    }


}

else {
    printf("0");
}

return 0;


}   