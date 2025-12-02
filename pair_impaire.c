#include <stdio.h>
#include <stdlib.h>

int main (){

    int nombreDonne;
    printf("Entrez un nombre : \n");
    scanf("%d", &nombreDonne);

    if(nombreDonne % 2 == 0){
        printf("%d est un nombre pair!\n", nombreDonne);
    }else{
        printf("%d est un nombre impair! \n", nombreDonne);
    }
    return 0;
}
