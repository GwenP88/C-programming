#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *heures, int *minutes);


int main(int argc, char * argv[])
{
    int heures = 0;
    int minutes = 0;
    printf("Entrez un nombre de minutes \n");
    scanf("%d", &minutes);

    decoupeMinutes(&heures, &minutes);

    printf("%d heures et %d minutes\n", heures, minutes);
    return 0;
}

void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes)

{
   *pointeurHeures = *pointeurMinutes/60;
   *pointeurMinutes = *pointeurMinutes %60;
}
