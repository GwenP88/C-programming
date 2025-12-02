#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreSaisi = 0;
    int nombrePair = 0;
    int i = 0;
    printf("Entrez un nombre : \n");
    scanf("%d", &nombreSaisi);
    printf ("voici la liste des nombres pairs jusqu'a %d : \n", nombreSaisi);

    for(i = 0 ; i <= nombreSaisi ; i++)
        {
            if(i % 2 == 0)
            {
                printf("%d \n", i);
            }
        }
    return 0;
}
