#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chiffre1 = 0;
    int chiffre2 = 0;
    int resultat = 0;

    printf("entrez le premier chiffre : \n\n");
    scanf("%d", &chiffre1);
    printf("entrez le deuxième chiffre : \n\n");
    scanf("%d", &chiffre2);

    resultat = chiffre1 * chiffre2;

    printf("%d x %d = %d\n\n", chiffre1, chiffre2, resultat);
    return 0;
}
