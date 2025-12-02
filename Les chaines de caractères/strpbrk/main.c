#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *suiteDeChaine;
    //on cherche la première occurence de y, r, i dans "bonjour Fany"
    suiteDeChaine = strpbrk("bonjour Fany!", "yri");

    if(suiteDeChaine != NULL)
    {
        printf("Voici la fin du texte, a partir du premier caractere trouve : %s\n", suiteDeChaine);
    }
    return 0;
}
