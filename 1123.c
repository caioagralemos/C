#include <stdio.h>

int main(){

int p;

scanf ("%d", &p);

if (p >= 1 && 20 >= p){
    printf ("Potencia de : %d W\n", 20 + (p*p*p));
}

else if (p >= 21 && 40 >= p){
    printf ("Potencia de : %d W\n", 8000 + ((p - 10) * (p - 10)));
}

else if (p >= 41 && 60 >= p){
    printf ("Potencia de : %d W\n", 9000 + (5 * p));
}

else if (p >= 61 && 80 >= p){
    printf ("Potencia de : %d W\n", 9300 + (2 * p));
}

else if (p >= 81 && 100 >= p){
    printf ("Potencia de : %d W\n", 9500 + p);
}

return 0;


}   