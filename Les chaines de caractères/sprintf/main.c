#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine[100];
    int age = 37;

    //on ecrit "tu as 37 ans" dans une chaine
    sprintf(chaine, "Tu as %d ans !\n", age);

    //on affiche la chaine pour vérifier
    printf("%s", chaine);

    return 0;
}
