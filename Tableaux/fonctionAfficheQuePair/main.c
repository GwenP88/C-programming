#include <stdio.h>
#include <stdlib.h>

void nombrePair(int monTableau[], int tailleTableau);
// int *monTableau = int monTableau[]

int main()
{
    // initialisation du tableau
    int monTableau[10] = {2, 15, 8, 7, 9, 25, 68, 75, 201, 108};

    //appel de la fonction qui affichera les nombres pairs uniquement
    nombrePair(monTableau, 10);

    return 0;
}

//fonction pour afficher les nombres pairs
void nombrePair(int monTableau[], int tailleTableau)
{
    int i = 0;
    for(i = 0; i < 10; i++){
        if(monTableau[i] % 2 == 0)
        {
            printf("Le nombre %d est pair. \n", monTableau[i]);
        }else{
            printf("Le nombre %d est impair. \n", monTableau[i]);
        }
    }
}
