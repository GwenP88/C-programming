#include <stdio.h>

char menu (void);
void table_fahr_celsius (void);
void table_celsius_fahr (void);
void conv_fahr_celsius (void);
void conv_celsius_fahr (void);

/**
 * main - function that allows the user to display Fahrenheit to Celsius conversion tables 
 * or to convert a temperature.
 * Return : 0 if it's ok.
 */

int main ()
{
    char choix;

    printf("\n\n ---- Convertisseur Fahrenheit - Celsius ---- \n\n");
    printf("------------------------------------------------------\n\n");

    do
    {
        choix = menu();
        switch (choix)
        {
        case '1' : table_fahr_celsius();
            break;
        case '2' : table_celsius_fahr();
            break; 
        case '3' : conv_fahr_celsius();
            break;
        case '4' : conv_celsius_fahr();
            break; 
        case 'q' :
        case 'Q' : printf("Au revoir et à bientôt!\n");
            break; 
        default : printf("Je n'ai pas compris votre demande, faites un choix :\n");
        }
    }
    while (choix != 'q' && choix != 'Q');

    return (0);
}

/**
 * menu - function to display a menu and read a user choice
 * Return : the user choice
 */

char menu ()
{
    char choix;

    printf("\nFaites votre choix : \n");
    printf("1 : Afficher la table de conversion de Fahrenheit à Celsius.\n");
    printf("2 : Afficher la table de conversion de Celsius à Fahrenheit.\n");
    printf("3 : Convertir une température de Fahrenheit à Celsius.\n");
    printf("4 : Convertir une température de Celsius à Fahrenheit.\n");
    printf("Q : Quitter le programme.\n");

    scanf(" %c", &choix);
    return (choix);
}

/**
 * table_fahr_celsius - that displays the Fahrenheit to Celsius conversion table
 * Return : nothing, void function
 */

void table_fahr_celsius (void)
{
    int fahr, celsius;
    int mini, maxi, intervalle;

    mini = 0;
    maxi = 300;
    intervalle = 20;

    for (fahr = mini; fahr <= maxi; fahr += intervalle)
    {
        celsius = (5.0/9.0) * (fahr -32.0);
        printf("%d°F\t%d°C\n", fahr, celsius);
    }
}

/**
 * table_celsius_fahr - that displays the Celsius to Fahrenheit conversion table
 * Return : nothing, void function
 */

void table_celsius_fahr (void)
{
    int fahr, celsius;
    int mini, maxi, intervalle;

    mini = -20;
    maxi = 200;
    intervalle = 20;

    for (celsius = mini; celsius <= maxi; celsius += intervalle)
    {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%d°C\t%d°F\n", celsius, fahr);
    }
}

/**
 * conv_fahr_celsius - that converts a given temperature from Fahrenheit to Celsius
 * Return : nothing, void function
 */

void conv_fahr_celsius (void)
{
    int fahr; 
    float celsius;

    printf("Entrez une température en Fahrenheit à convertir en Celsius : \n");
    scanf("%d", &fahr);
    celsius = (5.0/9.0) * (fahr -32.0);
    printf("%d Fahrenheit correspond à %.2f Celsius.\n", fahr, celsius);
}

/**
 * conv_celsius_fahr - that converts a given temperature from Fahrenheit to Celsius
 * Return : nothing, void function
 */

void conv_celsius_fahr (void)
{
    float fahr; 
    int celsius;

    printf("Entrez une température en Celsius à convertir en Fahrenheit: \n");
    scanf("%d", &celsius);
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%d Celsius correspond à %.2f Fahrenheit.\n", celsius, fahr);
}