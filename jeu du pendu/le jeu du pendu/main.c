#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

//prototypes
int tailleMot(char motSecret[]);
void initTableau(int* lettreTrouvee, int taille);
int gagne(int *lettreTrouvee, int nombreLettres);
char lireCaractere();
int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee);


int main(int argc, char* argv[])
{
    char lettre = 0; // Stocke la lettre proposee par l'utilisateur (retour du scanf)
    char motSecret[] = "ROUGE"; // C'est le mot a trouver
    int coupsRestants = 10; // Compteur de coups restants (0 = mort)
    int nombreLettres = tailleMot(motSecret); // enregistre la taille du mot dans la variable nobreLettres (ici 5)
    int *lettreTrouvee = NULL;
    lettreTrouvee = malloc(nombreLettres * sizeof(int));
        if (lettreTrouvee == NULL)
        {
        printf("Erreur d'allocation memoire.\n");
        return 1;
        }

    initTableau(lettreTrouvee, nombreLettres);

    printf("Bienvenue dans le Pendu !\n\n");

    while(coupsRestants > 0 && !gagne(lettreTrouvee, nombreLettres))
        {

        printf("\n\nIl vous reste %d coups a jouer", coupsRestants);
        printf("\nQuel est le mot secret ? ");

            for (int i = 0 ; i < nombreLettres ; i++)
                {
                    if (lettreTrouvee[i])
                        printf("%c", motSecret[i]);
                    else
                        printf("*");
                }
                printf("\nProposez une lettre : ");
                lettre = lireCaractere();
                if (!rechercheLettre(lettre, motSecret, lettreTrouvee))
                coupsRestants--;
        }

        if (gagne(lettreTrouvee, nombreLettres))
            printf("\n\nGagne ! Le mot secret etait bien : %s", motSecret);
        else
            printf("\n\nPerdu ! Le mot secret etait : %s", motSecret);
    free(lettreTrouvee);
    return 0;
}

//fonction pour calculer la taille du mot mystere
// la focntion taille de mot prend en param�tre un mot, un mot �tant une chaine de caract�re, ou un tableau de caract�re
// ici le mot secret est rouge 5 lettres + \0, donc tableau de 6 cases

int tailleMot(char motSecret[])
{
    int nombreLettres = 0;// initialisation des lettres � 0
    for(int i = 0; motSecret[i] != '\0'; i++)// boucle pour parcourir chaque caract�re, chaque case du tableau chaine
                                            // tant que la boucle ne tombe pas sur \0
                                            // augmente de 1 la variable nombreLettres � chaque tour
    {
        nombreLettres++;
    }
    return nombreLettres; // retourne le nombre de lettre (ici5)
}

// fonction qui lit le caract�re saisi, le met en majuscule, et vide le buffer.

char lireCaractere()
{
    char caractere = 0;

    caractere = getchar(); // On lit le premier caract�re
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas d�j�

    // On lit les autres caract�res m�moris�s un � un jusqu'au \n (pour les effacer)
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caract�re qu'on a lu
}

// fonction pour initialiser le tableau lettreTrouvee � 0.
// au debut de la partie, aucune lettre trouv�e, donc toutes les cases � 0.

void initTableau(int* lettreTrouvee, int taille)
{
    for(int i = 0; i < taille; i++)
    {
        lettreTrouvee[i] = 0;
    }
}

//fonction qui permet de savoir si le joueru � gagn� ou pas
//1 si gagne, 0 si perd
// la focntion prend en param�tre le nombre de lettre du mot mystere (5) avec le nombre de lettre trouv�e par le joueur
// si le nombre de lettre du mot myster = nombre de lettre trouv� alors 1, sinon 0

int gagne(int *lettreTrouvee, int nombreLettres)
{
    int i = 0;
    int joueurGagne = 1;

    for (i = 0 ; i < nombreLettres ; i++)
    {
        if (lettreTrouvee[i] == 0)
        joueurGagne = 0;
    }

    return joueurGagne;
}



// focntion qui renvoie vrai si lettre donn� = letre du mot et faux si lettre donn� pas dan,s le miot

int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee)
{
    int i = 0, bonneLettre = 0;
    for (i = 0 ; motSecret[i] != '\0' ; i++)
    {
        if (lettre == motSecret[i])
        {
                bonneLettre = 1;
                lettreTrouvee[i] = 1;
        }
    }
    return bonneLettre;
}
