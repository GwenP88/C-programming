#include <stdio.h>
#include <stdlib.h>

// Fonction qui retourne le maximum
int max(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

// Fonction qui retourne le minimum
int min(int x, int y) {
    if (x < y)
        return x;
    else
        return y;
}

int main() {
    int a, b;

    printf("Entrez un premier nombre : ");
    scanf("%d", &a);

    printf("Entrez un deuxieme nombre : ");
    scanf("%d", &b);

    if (a == b){
        printf("les deux nombres sont egaux");
    }else{
    // On utilise les deux fonctions
    int maximum = max(a, b);
    int minimum = min(a, b);

    printf("Le plus grand est %d et le plus petit est %d\n", maximum, minimum);
    }

    return 0;
}
