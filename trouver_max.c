#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max;
    printf("Entrez 3 nombres : \n");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if(a == b && b == c){
        printf("les 3 nombres sont egaux");
    }else if(b > max){
        max = b;
        printf("%d est le plus grand des nombres donnes", b);
    }else if(c > max){
        max = c;
        printf("%d est le plus grand des nombres donnes", c);
    }else{
        printf("%d est le plus grand des nombres donnes", a);
    }
    return 0;
}
