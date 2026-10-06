#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[])
{
    char op;
    int num1;
    int num2;
    int resultat;

    /* Vérification du nombre d'arguments */
    if (argc != 4)
    {
        printf("Utilisation : %s operateur nombre1 nombre2\n", argv[0]);
        printf("Exemple : %s + 10 5\n", argv[0]);
        return 1;
    }

    /* Récupération des arguments */
    op = argv[1][0];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    /* Choix de l'opération */
    switch (op)
    {
        case '+':
            resultat = somme(num1, num2);
            break;

        case '-':
            resultat = difference(num1, num2);
            break;

        case '*':
            resultat = produit(num1, num2);
            break;

        case '/':
            resultat = quotient(num1, num2);
            break;

        case '%':
            resultat = modulo(num1, num2);
            break;

        case '&':
            resultat = et(num1, num2);
            break;

        case '|':
            resultat = ou(num1, num2);
            break;

        case '~':
            resultat = negation(num1, num2);
            break;

        default:
            printf("Erreur : operateur inconnu.\n");
            return 1;
    }

    printf("Resultat : %d\n", resultat);

}