#include <stdio.h>

int main (void){

    int nombreDonne = 1;
    long long factorielle = 1;
    printf("Entrez un nombre pour connaitre sa factorielle : \n");
    scanf("%d", &nombreDonne);
    for(int i = 1; i <= nombreDonne; i++){
        factorielle *= i;
    }
    printf("La factorielle de %d est %lld", nombreDonne, factorielle);

    return 0;
}
