#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
    int resultat = 0;
    int nombreSaisi = 0;
    printf("Entrez un nombre :\n");
    scanf("%d", &nombreSaisi);
    resultat = nombreSaisi * nombreSaisi;

    printf("le carre de %d est : %d ",nombreSaisi, resultat);
    return 0;
}

