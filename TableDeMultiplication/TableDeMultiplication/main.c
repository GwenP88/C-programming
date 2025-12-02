#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrSaisi = 0;
    int resultat = 0;
    int i = 0;

    printf("Quelle table de multiplication souhaitez-vous ? \n\n");
    scanf("%d", &nbrSaisi);
    printf("\nVoici la table de %d : \n\n", nbrSaisi);

    for(i = 0; i <= 10 ; i++)
    {
        resultat = nbrSaisi * i;
        printf("%d * %d = %d \n" ,nbrSaisi, i, resultat);
    }

    return 0;
}
