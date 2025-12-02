#include <stdio.h>
#include <stdlib.h>

void fonctionEchanger(int *x, int *y);

int main()
{
    int a = 5;
    int b = 10;
    printf("Avant echange : a = %d et b = %d \n", a,b);
    fonctionEchanger(&a,&b);
    printf("Apres echange : a = %d et b = %d \n", a,b);

    return 0;

}

void fonctionEchanger(int *x, int *y){
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
