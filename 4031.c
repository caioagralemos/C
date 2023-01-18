#include <stdio.h>
#include <string.h>

int main (){

int n, duelos;
n = 5;
scanf ("%d", &duelos);

for ( ; duelos > 0; duelos--) {


int mat_um[n][n], mat_dois[n][n];
int sdp_um, sds_um, sdp_dois, sds_dois, soma_um, soma_dois;
sdp_um = 0;
sdp_dois = 0;
sds_um = 0;
sds_dois = 0;
soma_um = 0;
soma_dois = 0;
char nome_um[20], nome_dois[20];

scanf ("%s", nome_um);


for (int h = 0; h < n; h++) {

    for (int g = 0; g < n; g++){
        scanf("%d ", &mat_um[h][g]);

    }

}


scanf ("%s", nome_dois);

for (int h = 0; h < n; h++) {

    for (int g = 0; g < n; g++){
        scanf("%d", &mat_dois[h][g]);

    }

}

for (int b = 0; b < n; b++) {
    sdp_um = sdp_um + mat_um[b][b];
}


for (int b = 0; b < n; b++) {
    sdp_dois = sdp_dois + mat_dois[b][b];
}


for (int l = 4; l >= 0; l--) {
    sds_um += mat_um[4-l][l];
}

for (int l = 4; l >= 0; l--) {
    sds_dois += mat_dois[4-l][l];
}

soma_um = sdp_um + sds_um;
soma_dois = sdp_dois + sds_dois;

if (soma_um > soma_dois){
printf("%s venceu com valor %d\n", nome_um, soma_um);
}
else if (soma_um < soma_dois){
printf("%s venceu com valor %d\n", nome_dois, soma_dois);
}
else if (soma_um == soma_dois){
printf("Empataram com o valor %d\n", soma_um);
}