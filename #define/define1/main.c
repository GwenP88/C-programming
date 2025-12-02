#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10
#define A 62
#define B 12
#define AIRE (A*B)

int main()
{
    int taille = TAILLE;
    printf("%d\n", taille);

    int aire = AIRE;
    printf("%d\n", aire);

    int monTableau[TAILLE] = {4,6,12,7,3,23,45};
    int i;
    for(i = 0; i < TAILLE ; i++){
        printf("%d\n",monTableau[i]);
    }
    return 0;
}
