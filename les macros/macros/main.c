#include <stdio.h>
#include <stdlib.h>

#define AGE(age, nom) if(age >= 18 && age <= 40) \
                    printf("Vous etes majeur %s ! bravo!\n", nom);\
                    else \
                        if(age < 18)\
                        printf("Vous etes trop jeune %s, revenez quand vous serez grand!\n", nom);\
                        else \
                        printf("Franchement %s, vous etes trop vieux !\n", nom);\

int main()
{
    AGE(18, "maxime")
    AGE(25, "justine")
    AGE(12, "leo")
    AGE(42, "paul")
    return 0;
}
