#include <stdio.h>
#include <stdlib.h>

// prototype de la fonction
int carre(int n);

int main() {
    int nombre = 0;
    int resultat = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // appel de la fonction carre
    resultat = carre(nombre);

    printf("Le carre de %d est %d\n", nombre, resultat);

    return 0;
}

// Définition de la fonction
int carre(int n) {
    return n * n;  // on renvoie le carré du nombre
}
