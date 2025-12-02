#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 78;
    int b = 56;

    // '0' + 1 = 48 + 1 = 49. le code ascii 49 correspond au chiffre 2
    // '0' + 2 = 48 + 2 = 50. le code ascii 50 correspond au chiffre 2
    // permet de créer un décalage dnas la table à partir du '0' (et donc du 48)
    // permet donc d'afficher un chiffre stocké sous la forme d'un entier
    // putchar('0') n'est pas le chiffre 0, c'est le caractère 0 dont le code numérique est 48

    putchar('0' + (a / 10)); // ici 0 = 48 donc 48 + 7 (car 78 / 10 = 7) = 55. 55 code ascii de 7 = donc 7
    putchar('0' + (a % 10)); // ici 0 = 48 donc 48 + 8 (car 78 % 10 = 8) = 56. 56 code ascii de 8 = donc 8
    putchar(' ');
    putchar('0' + (b / 10)); // ici 0 = 48 donc 48 + 5 (car 56 / 10 = 5) = 53. 53 code ascii de 5 = donc 5
    putchar('0' + (b % 10)); // ici 0 = 48 donc 48 + 6 (car 56 % 10 = 6) = 54. 54 code ascii de 6 = donc 6

    // la compile affiche 78 56

	return (0);
}
