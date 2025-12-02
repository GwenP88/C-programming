#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *suiteDeChaine;
    //on cherche la première occurence de y, r, i dans "bonjour Fany"
    suiteDeChaine = strstr("Lorem ipsum dolor sit amet, consectetur adipiscing elit.", "amet");

    if(suiteDeChaine != NULL)
    {
        printf("Voici la premiere occurence de amet dans la chaine : %s\n", suiteDeChaine);
    }
    return 0;
}
