#include <stdio.h>

int main (){

    int x, y, i;
    i = 0;
    scanf ("%d %d", &x, &y);

    for (int z = 1; z <= y; z++){

        i++;
        if (i == x) {
            printf ("%d\n", z);
            i = 0; 
            
        }
        else if (i < x) {
            printf("%d " , z);
        }

    }


    return 0;
}