#include <stdio.h>
#include <stdlib.h>

void minMax(int a, int b);

int main()
{

    int a = 0;
    int b = 0;
    printf("Entrez un premier nombre : ");
    scanf("%d", &a);
    printf("\nEntrez un deuxieme nombre :");
    scanf("%d", &b);
    minMax(a,b);

    return 0;
}

void minMax(int x, int y) {
    if (x > y) {
        printf("Le plus grand est %d et le plus petit est %d\n", x, y);
    } else if (x < y) {
        printf("Le plus grand est %d et le plus petit est %d\n", y, x);
    } else {
        printf("Les deux nombres sont egaux\n");
    }
}
