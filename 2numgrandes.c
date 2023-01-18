#include <stdio.h>
#include <string.h>

int main(){
    char a[1000], b[1000], soma[1000];
    int i, j, k, tamanho_a, tamanho_b, tamanho_s, auxiliar=0, auxiliar_a, auxiliar_b, s;
    scanf("%s", a);
    scanf("%s", b);
    
    tamanho_a = strlen(a);
    tamanho_b = strlen(b);
    tamanho_s = (tamanho_a > tamanho_b ? tamanho_a : tamanho_b) + 1;
    
    soma[tamanho_s] = '\0';
    for(i=tamanho_a-1, j=tamanho_b-1, k=tamanho_s-1; k >= 0; i--, j--, k--){
        auxiliar_a = i >= 0 ? a[i] - '0' : 0;
        auxiliar_b = j >= 0 ? b[j] - '0' : 0;
        s = auxiliar_a + auxiliar_b + auxiliar;
        soma[k] = s % 10 + '0';
        auxiliar = s / 10;
    }
    if(soma[0] == '0'){
        for(i=0; soma[i]; i++){
            soma[i] = soma[i+1];
        }
    }
    printf("%s\n", soma);
    return 0;
}