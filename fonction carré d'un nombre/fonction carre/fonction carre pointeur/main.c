#include <stdio.h>
#include <stdlib.h>

// prototype de la fonction
void carre(int nombre, int *resultat);

int main() {
    int nombre = 0;
    int resultat = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // appel de la fonction avec l'adresse de resultat
    carre(nombre, &resultat);

    printf("Le carre de %d est %d\n", nombre, resultat);

    return 0;
}

// Définition de la fonction
void carre(int nombre, int *resultat) {
    *resultat = nombre * nombre;
    // *resultat = contenu de la case mémoire pointée
    // donc on stocke le carré directement dans la variable du main
}
