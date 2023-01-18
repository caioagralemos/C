#include <stdio.h>

int main ()
{
    int a, b, c;

    scanf ("%d %d %d", &a, &b, &c);

    if ((a + b) == c){
     printf("S\n");
    }

    else if ((a + c) == b){
     printf("S\n");
    }

    else if ((b + c) == c){
     printf("S\n");
    }

    else if (a == b && b == c){
     printf("S\n");
    }

    else if (a == b || a == c || b == c){
     printf("S\n");
    }

    else {
        printf("N\n");
    }

 
    return 0;

}