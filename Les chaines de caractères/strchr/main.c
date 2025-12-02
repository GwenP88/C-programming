#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texte[] = "abcdefghijklmnopqrstuvwxyz alphabet";
    char *finDeChaine = NULL;

    finDeChaine = strchr(texte, 'p');
    if(finDeChaine != NULL){
         printf("Voici la fin de la chaine a partir du premier p : %s\n", finDeChaine);
    }

    return 0;
}
