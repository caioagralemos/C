#include <stdio.h>

int main () {

    double salario;
    
    scanf ("%lf", &salario);

    if (salario <= 280.00){

        double reajuste = salario * 1.2;
        
        printf ("%0.2lf\n", salario);
        printf ("20\n");
        printf ("%0.2lf\n", reajuste - salario);
        printf ("%0.2lf\n", reajuste);

    }

    else if (salario > 280.00 && salario <= 700.00){

        double reajuste = salario * 1.15;
        
        printf ("%0.2lf\n", salario);
        printf ("15\n");
        printf ("%0.2lf\n", reajuste - salario);
        printf ("%0.2lf\n", reajuste);

    }

    else if (salario > 700.00 && salario < 1500.00){

        double reajuste = salario * 1.1;
        
        printf ("%0.2lf\n", salario);
        printf ("10\n");
        printf ("%0.2lf\n", reajuste - salario);
        printf ("%0.2lf\n", reajuste);

    }

    else if (salario >= 1500.00){

        double reajuste = salario * 1.05;
        
        printf ("%0.2lf\n", salario);
        printf ("5\n");
        printf ("%0.2lf\n", reajuste - salario);
        printf ("%0.2lf\n", reajuste);

    }
    

    return 0;
}