#include <stdio.h>
#include <stdlib.h>

struct Personne
{
    char nom[100];
    char prenom[100];
    int age;

};

typedef struct Personne Personne;

int main()
{
    Personne personne;
    printf("Quel est votre nom ?: \n");
    scanf("%s", personne.nom); // dans la variable personne et la sous variable nom
    printf("Quel est votre prenom ?: \n");
    scanf("%s", personne.prenom); // dans la variable personne et la sous variable personne
    printf("Quel est votre age ?: \n");
    scanf("%d", &personne.age); // dans la variable personne et la sous variable age. ici avec & car on veut récupérer l'adresse
    printf("Bonjour %s %s! Vous avez %d ans. Bienvenue! Vous pouvez entrer! \n", personne.prenom, personne.nom, personne.age);
    return 0;
}
