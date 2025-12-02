#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine1[100] = "Salut ";
    char chaine2[] = "Gwen";
    printf("%s\n", chaine1); //ici salut

    strcat(chaine1, chaine2); // ajout de chaine 2 a chaine 1

    printf("%s\n", chaine1); // maintenant salut gwen
    printf("%s\n", chaine2); // toujours gwen

    return 0;
}
