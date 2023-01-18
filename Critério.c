#include <stdio.h>

int main(){

int p, q;

scanf ("%d\n%d", &p, &q);

if (p == 1 && q == 0){
    printf ("0");
}

else if (p == 0 && q == 0){
    printf ("0");
}

else if (p == 0 && q == 1){
    printf ("1");
}

else if (p == 1 && q == 1){
    printf ("0");
}


return 0;


}   