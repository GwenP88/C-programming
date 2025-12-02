#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    int age = 10;
    printf("la valeur de la variable age est de %d\n", age);
    printf("l'adresse de la variable age est de %p\n", &age);

    int *pointeur;
    pointeur = &age;
    printf("la valeur du pointeur est de %p\n", pointeur);
    printf("la valeur de la variable contenue dans le pointeur est de %d\n", *pointeur);

    return 0;
}
