#include <stdio.h>
#include <stdlib.h>

int main()
{
    char anglais[6];
    anglais[0] = 'h';
    anglais[1] = 'e';
    anglais[2] = 'l';
    anglais[3] = 'l';
    anglais[4] = 'o';
    anglais[5] = '\0'; // pas obligatoire de l'écrire car le prend automatiquement en compte dans la déclaration de la taille
    printf("%s\n", anglais);

    //modifier la lettre d'un mot
    anglais[1] = 'a';

    printf("%s\n", anglais);

    char suedois[5] = {'h', 'e', 'j', '!', '\0'};
    printf("%s\n", suedois);

    char francais[] = "bonjour!";
    printf("%s\n", francais);

    // lettre entre '' et mot entre ""!


    return 0;
}
