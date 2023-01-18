#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int main() {

      double salario, trinta, vftarifa, tarifa, skm, kmt, restou, faltou, fds; 

      scanf ("%lf\n %lf\n %lf\n %lf\n %lf", &salario, &vftarifa, &skm, &kmt, &fds);

      trinta = salario * 0.3;


      if (fds == 0) {
        
        tarifa = vftarifa + skm * kmt;
        restou = trinta - tarifa;
        faltou = tarifa - trinta;

        if (tarifa <= trinta) {
           printf ("Vai poder viajar.\n%.2lf\n%.2lf", tarifa, restou);
           }

        else {
           printf ("N?o vai poder viajar.\n%.2lf", faltou);
           }

      }

      else if (fds == 1){
      
        tarifa = (vftarifa + skm * kmt) * 1.1;
        restou = trinta - tarifa;
        faltou = tarifa - trinta;

        if (tarifa <= trinta) {
           printf ("Vai poder viajar.\n%.2lf\n%.2lf", tarifa, restou);
           }

        else {
           printf ("N?o vai poder viajar.\n%.2lf", faltou);
           }

      }


    return 0;
}