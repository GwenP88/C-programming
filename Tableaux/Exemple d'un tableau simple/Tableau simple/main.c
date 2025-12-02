#include <stdio.h>
#include <stdlib.h>

int main()
{

    int monTableau[4];

    monTableau[0] = 10;
    monTableau[1] = 15;
    monTableau[2] = 2;
    monTableau[3] = 103;

    printf("%d\n", monTableau); //ici pointeur du tableau = pointe forcement sur l'adresse de la premiere case
                                //on connait donc son adresse
    printf("%d\n", *monTableau); // en ajoutant * on aura la valeur de la première case du tableau

    printf("%d\n", monTableau[3]); //avec l'indice de la case, son numéro de case, on connait la valeur de la case
                                    // ici dans la 4eme case, il y a la valeur 12

    printf("%d\n", monTableau + 1); //donne l'adresse de la première case apres la fin du tableau

    printf("%d\n", *(monTableau + 1)); // donne la valeur de la deuxieme case
    printf("%d\n", *(monTableau + 2)); // donne la valeur de la troisieme case
    printf("%d\n", monTableau[2]); // donne la valeur de la troisieme case

    return 0;
}
