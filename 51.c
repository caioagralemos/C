#include <stdio.h>
#include <stdlib.h>

int main () {

    int codigo;
    double preco, quantidade, total;

    scanf("%d\n%lf", &codigo, &quantidade);
 
    if (codigo == 1){

        preco = 5.30;

        total = preco * quantidade;

        if (total >= 40 || quantidade >= 15){
            printf ("R$ %.2lf", total*0.85);
        }
        
        else {
            printf("R$ %.2lf", total);
        }
    }

    else if (codigo == 2){

        preco = 6.00;

        total = preco * quantidade;

        if (total >= 40 || quantidade >= 15){
            printf ("R$ %.2lf", total*0.85);
        }
        
        else {
            printf("R$ %.2lf", total);
        }
    }

    else if (codigo == 3){

        preco = 3.20;

        total = preco * quantidade;

        if (total >= 40 || quantidade >= 15){
            printf ("R$ %.2lf", total*0.85);
        }
        
        else {
            printf("RS%.2lf", total);
        }
    }

    else if (codigo == 4){

        preco = 2.50;

        total = preco * quantidade;

        if (total >= 40 || quantidade >= 15){
            printf ("R$ %.2lf", total*0.85);
        }
        
        else {
            printf("R$ %.2lf", total);
        }
    }


    return 0;
}