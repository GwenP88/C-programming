#include <stdio.h>
#include <stdlib.h>

/*
sizeof(donnee)                : retourne la taille en octets d'une donnée
malloc(<taille_en_octets>)    : alloue dynamiquement une zone mémoire
free(<donnee_allouee>)        : libère la mémoire allouée dynamiquement
calloc(<donnee>, <taille>)    : alloue et initialise tout à 0
realloc(<donnee>, <taille>)   : réalloue un espace mémoire
*/

int main(void)
{
    int nombreJoueurs = 2;
    int *liste_joueurs = NULL;
    int i;

    // --- Allocation initiale ---
    liste_joueurs = malloc(nombreJoueurs * sizeof(int));
    if (liste_joueurs == NULL)
        exit(1);

    // --- Premier remplissage ---
    for (i = 0; i < nombreJoueurs; i++)
    {
        printf("Joueur %d -> numero %d\n", i + 1, i * 3);
        liste_joueurs[i] = i * 3;
    }

    // --- Affichage du tableau ---
    for (i = 0; i < nombreJoueurs; i++)
    {
        printf("[%d] ", liste_joueurs[i]);
    }

    printf("\nAdresse de la liste : %p\n", (void *)liste_joueurs);

    printf("\n--------------------------\n");

    // --- Réallocation ---
    nombreJoueurs = 5;
    liste_joueurs = realloc(liste_joueurs, nombreJoueurs * sizeof(int));
    if (liste_joueurs == NULL)
        exit(1);

    // --- Nouveau remplissage ---
    for (i = 0; i < nombreJoueurs; i++)
    {
        printf("Joueur %d -> numero %d\n", i + 1, i * 3);
        liste_joueurs[i] = i * 3;
    }

    // --- Affichage du nouveau tableau ---
    for (i = 0; i < nombreJoueurs; i++)
    {
        printf("[%d] ", liste_joueurs[i]);
    }

    // --- Affichage de l’adresse du bloc ---
    printf("\nAdresse de la liste : %p\n", (void *)liste_joueurs);

    // --- Libération ---
    free(liste_joueurs);
    return 0;
}