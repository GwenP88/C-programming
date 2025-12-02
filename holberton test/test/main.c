#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 20;

    int *p = &a;   // p pointe sur a
    *p = b;        // a prend la valeur de b (20)

    p = &b;        // p pointe maintenant sur b
    *p = 100;      // b devient 100

    int *q = p;    // q pointe où p pointe (sur b)
    *q = 200;      // on écrit 200 à l'adresse pointée (b)

    // === Vérification (à exécuter APRES avoir fait tes prédictions) ===
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("p (adresse) = %p\n", (void*)p);
    printf("q (adresse) = %p\n", (void*)q);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

    // Bonus: pour bien distinguer adresses vs valeurs
    printf("&a = %p, &b = %p\n", (void*)&a, (void*)&b);

    return 0;
}
