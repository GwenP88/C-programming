#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrSaisi;
    int resultat = 1;
    int i;

    printf("Saisissez un nombre dont vous souhaitez connaitre la factorielle : \n");
    scanf("%d", &nbrSaisi);

    for (i = 1; i <= nbrSaisi; i++)
        {
            resultat = i * resultat;
        }
        printf("\nLa factorielle de %d est %d\n", nbrSaisi, resultat);
    return 0;
}
