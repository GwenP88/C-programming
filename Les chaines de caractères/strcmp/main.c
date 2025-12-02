#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text1[] = "le texte de test";
    char text2[] = "le texte de test";

    if(strcmp(text1, text2) == 0) //ici, si les deux chaines sont identiques
    {
        printf("les chaines sont identiques\n\n");
    }else{
        printf("les chaines sont differentes\n\n");
    }
    return 0;
}
