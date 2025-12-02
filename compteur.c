#include <stdio.h>

int main(void){
    int compteur = 0;
    char choix;

    printf("Super compteur interactif : Bienvenue!\n");

    while(1){
        printf("Valeur actuelle du compteur : %d\n", compteur);
        printf("Tapez [+] pour faire +1\n");
        printf("Tapez [-] pour faire -1\n");
        printf("Tapez [Q] pour faire quitter\n");
        printf("Tapez [R] pour faire reinitialiser le compteur\n");
        scanf(" %c", &choix);

        if (choix == '+'){
            compteur ++;
        }else if (choix == '-'){
            compteur --;
        }else if (choix == 'Q' || choix == 'q'){
            printf("Merci d'avoir jouer! a bientot!\n");
            break;
        }else if (choix == 'R' || choix == 'r'){
            compteur = 0;
            printf("Le compteur a ete reinitialise a 0.\n");
        }else{
            printf("Commande inconnue... verifier votre saisie!\n");
        }
    }

    printf("Fin du programme. Valeur finale :  %d\n", compteur);
    return 0;
}

