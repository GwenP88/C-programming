#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreSaisi = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &nombreSaisi);

    if(nombreSaisi % 2 == 0)
    {
        printf("%d est un nombre pair \n", nombreSaisi);
    }else{
        printf("%d est un nombre impair \n", nombreSaisi);
    }

    return 0;
}
