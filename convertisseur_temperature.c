#include <stdio.h>

int main(){

    int choix = 0;
    double nombreDonne = 0;
    double f = 0;
    double c = 0;

    do{
        printf("Choississez votre convertisseur : \n 1: de Celsius a Farenheit. \n 2: de Farenheit a Celsius.\n 3: Quitter le programme. \n");
        scanf("%d", &choix);

        switch (choix){
            case 1 : 
                printf("Entrez une temperature a convertir : \n");
                scanf("%lf", &nombreDonne);
                f = nombreDonne * 9.0/5.0 + 32.0;
                printf("%.2f Celsius correspond a %.2f Farenheit \n", nombreDonne, f);
            break;
            case 2 :
                printf("Entrez une temperature a convertir : \n");
                scanf("%lf", &nombreDonne);
                c = (nombreDonne - 32) * 5 / 9;
                printf("%.2f Farenheit correspond a %.2f Celsius \n", nombreDonne, c);
            break;
            case 3 : 
                printf("Bye!\n");
            break;    
            default :
                printf("Ce choix n'est pas valide! \n");
            break; 
        }
    }while (choix != 3);

    return 0;
}
