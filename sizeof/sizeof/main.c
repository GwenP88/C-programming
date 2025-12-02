#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("char : %d octets\n", sizeof(char));
    printf("int : %d octets\n", sizeof(int));
    printf("long : %d octets\n", sizeof(long));
    printf("double : %d octets\n", sizeof(double));

    void *memoireDonnee = NULL;
    memoireDonnee = malloc(sizeof(int) * 6);
    printf("Adresse de la memoire allouee : %p\n", memoireDonnee);
    return 0;
}
