#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *memoireAllouee = malloc(sizeof(int));
    if(memoireAllouee == NULL){
        exit(0);
    }

    printf("Quel age avez-vous ? \n");
    scanf("%d", memoireAllouee);                       // ici sans * car je veux l'adresse, la valeur ne m'interresse pas
    printf("Vous avez %d ans\n", *memoireAllouee);     // ici avec * car je veux récupérer la valeur

    free(memoireAllouee);
    return 0;
}
