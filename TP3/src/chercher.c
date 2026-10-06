#include <stdio.h>

int main(void)
{
    char phrases[10][100] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[100];
    int trouve = 0;

    printf("Entrez une phrase a rechercher : ");
    fgets(recherche, sizeof(recherche), stdin);

    /* Supprimer le retour a la ligne */
    int i = 0;

    while (recherche[i] != '\0')
    {
        if (recherche[i] == '\n')
        {
            recherche[i] = '\0';
            break;
        }

        i++;
    }

    /* Parcours des 10 phrases */
    for (int p = 0; p < 10; p++)
    {
        int j = 0;

        /* Comparaison caractere par caractere */
        while (phrases[p][j] != '\0' &&
               recherche[j] != '\0' &&
               phrases[p][j] == recherche[j])
        {
            j++;
        }

        /* Les deux chaines sont identiques */
        if (phrases[p][j] == '\0' && recherche[j] == '\0')
        {
            trouve = 1;
            break;
        }
    }

    if (trouve)
    {
        printf("Phrase trouvee\n");
    }
    else
    {
        printf("Phrase non trouvee\n");
    }

}