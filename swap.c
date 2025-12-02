#include <stdio.h>

void swap (int *a, int *b);

int main(){

    int a, b;
    puts("Entrez deux nombres : \n");
    scanf("%d %d", &a, &b);
    printf("Avant a = %d et b = %d.\n", a, b);
    swap (&a, &b);
    printf("Maintenant a = %d et b = %d.\n", a, b);

    return 0;
}

void swap (int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
