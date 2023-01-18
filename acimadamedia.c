#include <stdio.h>

int main(){

double a, b, c, media;

scanf ("%lf\n%lf\n%lf", &a, &b, &c);

media = (a + b + c) / 3;

if (a > media && b > media && c > media){
    printf("3\n");
}

else if (a > media && b > media && c < media){
    printf("2\n");
}

else if (a > media && b < media && c > media){
    printf("2\n");
}

else if (a < media && b > media && c > media){
    printf("2\n");
}

else if (a > media && b < media && c < media){
    printf("1\n");
}

else if (a < media && b > media && c < media){
    printf("1\n");
}

else if (a < media && b < media && c > media){
    printf("1\n");
}

else if (a <= media && b <= media && c <= media){
    printf("0\n");
}

return 0;


}   