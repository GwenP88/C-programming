#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreSaisi = 0;
    int i = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &nombreSaisi);

    printf("Voici la liste des nombres pairs jusqu'a %d :\n", nombreSaisi);

    for(i = 0; i <= nombreSaisi; i += 2)  // on avance de 2 en 2
    {
        printf("%d\n", i);
    }

    return 0;
}
