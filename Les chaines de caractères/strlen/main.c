#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[]="salut";
    int longueurChaine = 0;
    longueurChaine = strlen(chaine);
    printf("le mot %s a %d lettres \n", chaine, longueurChaine);

    return 0;
}
