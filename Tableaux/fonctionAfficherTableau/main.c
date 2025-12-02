#include <stdio.h>
#include <stdlib.h>

//prototype de la fonction pour afficher le tableau
void afficherTableau(int *monTableau, int tailleTableau);

int main()
{
    //initialisation du tableau
    int monTableau[6] = {10, 15, 8, 125, 9, 87};

    //appel de la fonction pour afficher le tableau
    afficherTableau(monTableau, 6);

    return 0;
}

//fonction pour afficher le tableau
void afficherTableau(int *monTableau, int tailleTableau)
{
    int i = 0;
    for(i = 0; i < tailleTableau ; i++)
    {
        printf("%d\n", monTableau[i]);
    }
}
