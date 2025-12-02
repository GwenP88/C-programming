#include <stdio.h>

int main (void){

    double nombreDonne = 0;
    double f = 0;
    printf("Entrez un nombre en Degre à convertir en Farenheit : \n");
    scanf("%lf", &nombreDonne);
    f = nombreDonne * 9.0/5.0 + 32.0;
    printf("%.2f degres correspond a %f Farenheit", nombreDonne, f);

    return 0;
}
