#include <stdio.h>
#include <stdlib.h>

void triple(int *nombre) // ce paramètre pointe vers une adresse
{
    *nombre = *nombre *3; //*nombre ouvre la boite de l'adresse 0x7ffeeabc et donc de la valeur 10
}

int main(int argc, const char * argv[])
{
    int value = 10; // value vaut 10. son adresse est par exemple 0x7ffeeabc. c'est l'adresse d'une boite qui contient 10
    triple(&value); // ici se traduit par "donne moi l'adresse de value" et donc l'adresse de la boite qui contient 10
    printf("la valeur de la variable value est de %d\n", value);

    return 0;
}

