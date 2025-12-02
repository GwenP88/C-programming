#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaineOrigine[] = "ma belle phrase";
    char chaineCopiee[100] = {0}; //chaine vide avec plein de place

    strcpy(chaineCopiee, chaineOrigine); // copie de l'origine dans la copie

    printf("Phrase d'origine : %s\n", chaineOrigine);
    printf("Phrase copiee : %s\n", chaineCopiee);
    return 0;
}
