#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degre = 0;
    printf("saisir la temperature en degre :\n\n");
    scanf("%d", &degre);
    int resultat = (degre * 9/5)+32;
    printf("%d degre correspond a %d fahrenheit", degre, resultat);
    return 0;
}
