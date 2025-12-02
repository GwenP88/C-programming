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

// Fonction qui teste l'egalite
int egalite(int x, int y) {
    if (x == y)
        return 1;  // vrai
    else
        return 0;  // faux
}

int main() {
    int a, b;

    printf("Entrez un premier nombre : ");
    scanf("%d", &a);

    printf("Entrez un deuxieme nombre : ");
    scanf("%d", &b);

    if (egalite(a, b)) {
        printf("Les deux nombres sont egaux : %d\n", a);
    } else {
        printf("Le plus grand est %d et le plus petit est %d\n", max(a, b), min(a, b));
    }

    return 0;
}

