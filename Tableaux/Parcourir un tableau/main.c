#include <stdio.h>
#include <stdlib.h>

int main()
{
    int monTableau[4];
    int i = 0;

    monTableau[0] = 2;
    monTableau[1] = 125;
    monTableau[2] = 72;
    monTableau[3] = 28;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", monTableau[i]);
    }
    return 0;
}
