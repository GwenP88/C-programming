#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Entrez 3 nombres : ");
    fflush(stdout);
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

    if (a == b && b == c) {
        printf("Les 3 nombres sont égaux\n");
    } else {
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        printf("%d est le plus grand des nombres donnés\n", max);
    }
    return 0;
}

