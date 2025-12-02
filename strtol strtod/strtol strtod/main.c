#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;

    if (fgets(chaine, longueur, stdin) != NULL)
    {
        positionEntree = strchr(chaine, ',');
        if (positionEntree != NULL)
        {
            *positionEntree = '.';
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

double lireDouble()
{
    char nombreTexte[100] = {0}; // 100 cases devraient suffire

    if (lire(nombreTexte, 100))
    {
        // Si lecture du texte ok, convertir le nombre en long et le retourner
        return strtod(nombreTexte, NULL);
    }
    else
    {
        // Si problème de lecture, renvoyer 0
        return 0.00;
    }
}

int main(int argc, char *argv[])
{
    double age = 0;

    printf("Quel est votre age ? ");
    age = lireDouble();
    printf("Ah ! Vous avez donc %.2f ans !\n\n", age);

    return 0;
}
