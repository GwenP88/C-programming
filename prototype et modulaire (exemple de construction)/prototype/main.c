#include <stdio.h>
#include <stdlib.h>

#include "aire.h"

int main(int argc, const char * argv[])
{
    double resultat;
    resultat = airRectangle(10.0, 20.0);
    printf("l'aire du rectangle est %f\n", resultat);
    return 0;
}
