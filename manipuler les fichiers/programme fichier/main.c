#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fichier = NULL;
    int age = 0;

    fichier = fopen("test.txt", "r+");

    if(fichier != NULL)
    {
        fputc('A', fichier);
        fputc('B', fichier);
        fputc('C', fichier);
        fputc('D', fichier);
        fputc('E', fichier);
        fputs("\nBonjour a tous! j'ai ecris une chaine de caracteres dans un fichier en passant par un programme !", fichier);
        printf("\nquel age as tu?\n");
        scanf("%d", &age);
        fprintf(fichier, "\nLa personne qui ecrit dans ce programme a %d ans", age);
        fclose(fichier);
    }
    return 0;
}
