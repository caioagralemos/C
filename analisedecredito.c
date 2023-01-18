#include <stdio.h>

int main(){

float renda, comprometimento;

scanf ("%f\n %f", &renda, &comprometimento);

if (comprometimento > (renda * 0.3)){
    printf ("0.00");
}

else if ((renda * 0.3) >= comprometimento){
    printf ("%.2f\n", (renda * 0.3) - comprometimento);
}

return 0;


}   