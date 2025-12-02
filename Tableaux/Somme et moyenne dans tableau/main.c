#include <stdio.h>
#include <stdlib.h>

//prototype des fonctions du programme
double moyenneTableau(int tableau[], int tailleTableau);


int main()
{
    int tableau[] = {10,15,18,6,4,19,7,12};
    int tailleTableau = 8;
    double moyenne = moyenneTableau(tableau, tailleTableau);

    printf("La moyenne est de : %f\n", moyenne);
    return 0;
}

//Fonction permettant de calculer la somme des valeurs du tableau
double moyenneTableau(int tableau[], int tailleTableau){
    int i = 0;// pas utile car déclarer et initialisé dans la boucle si on fait for( int i = 0...)
    float somme = 0;
    for(i = 0; i < tailleTableau; i++)
    {
        somme = somme + tableau[i]; //somme += tableau[i]
    }
    return (double)somme/tailleTableau;
}

