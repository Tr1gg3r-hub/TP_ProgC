#include <stdio.h>

int main(void)
{
    int tableau[100];
    int recherche;
    int gauche;
    int droite;
    int milieu;
    int trouve = 0;

    /* Création du tableau trié */
    for (int i = 0; i < 100; i++)
    {
        tableau[i] = i + 1;
    }

    /* Affichage du tableau */
    printf("Tableau trie :\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n\n");

    /* Demande du nombre à rechercher */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    /* Initialisation de la recherche dichotomique */
    gauche = 0;
    droite = 99;

    while (gauche <= droite)
    {
        milieu = (gauche + droite) / 2;

        if (tableau[milieu] == recherche)
        {
            trouve = 1;
            break;
        }
        else if (tableau[milieu] < recherche)
        {
            gauche = milieu + 1;
        }
        else
        {
            droite = milieu - 1;
        }
    }

    /* Résultat */
    if (trouve)
    {
        printf("Resultat : entier present\n");
    }
    else
    {
        printf("Resultat : entier absent\n");
    }

}