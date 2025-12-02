#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre1, nombre2;
    printf("Tapez un premier nombre : \n");
    scanf("%d", &nombre1);
    printf("Tapez un deuxième nombre : \n");
    scanf("%d",&nombre2);
    printf("La somme de %d + %d = %d",nombre1 , nombre2, nombre1 + nombre2);
    return 0;
}
