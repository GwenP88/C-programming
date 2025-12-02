#include <stdio.h>
#include <stdlib.h>

void pairOUImpair (int n);

int main()
{
    int nombreSaisi = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &nombreSaisi);
    pairOUImpair(nombreSaisi);

    return 0;
}

void pairOUImpair (int n){
if(n % 2 == 0)
    {
        printf("%d est un nombre pair \n", n);
    }else{
        printf("%d est un nombre impair \n", n);
    }
}
