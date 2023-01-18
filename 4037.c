#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int id[n], idade[n];
    int midade = 100;
    double salario[n];
    double msalario = 0;
    int idmsalario, idmidade;
    idmsalario = 0;
    idmidade = 0;

    for (int cont = 0; cont < n; cont++){
        scanf("%d %d %lf", &id[cont], &idade[cont], &salario[cont]);
        if (idade[cont] < midade)
        {
            midade = idade[cont];
            idmidade = cont;
        }
        if (salario[cont] > msalario)
        {
            msalario = salario[cont];
            idmsalario = cont;
        }
        
    }


    printf("Maior salario registrado\n");
    printf("ID: %d\n", id[idmsalario]);
    printf("Idade: %d\n", idade[idmsalario]);
    printf("Salario: %.2lf\n\n", msalario);

    printf("Menor idade registrada\n");
    printf("ID: %d\n", id[idmidade]);
    printf("Idade: %d\n", midade);
    printf("Salario: %.2lf\n\n", salario[idmidade]);


    return 0;
}