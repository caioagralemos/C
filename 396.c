#include <stdio.h>

int cafe(double b, double c) {

    int q;

    scanf ("%d", &q);

    if (q != 999) {
         if (q > 2) {
            c = c + ((q - 2) * 12.89);
            cafe (b + 1, c);
        } else {

        cafe (b, c);}

    }

    else {
    printf("%.2lf\n%.0lf\n", c, b);
    
    }

    return 0;

}

int main()
{

   cafe(0, 0);

    return 0;

}