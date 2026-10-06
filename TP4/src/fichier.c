#include <stdio.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier)
{
    FILE *fichier;
    char caractere;

    fichier = fopen(nom_de_fichier, "r");

    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier %s.\n",
               nom_de_fichier);
        return;
    }

    printf("\nContenu du fichier %s :\n", nom_de_fichier);

    while ((caractere = fgetc(fichier)) != EOF)
    {
        putchar(caractere);
    }

    fclose(fichier);
}

void ecrire_dans_fichier(const char *nom_de_fichier,
                         const char *message)
{
    FILE *fichier;

    fichier = fopen(nom_de_fichier, "w");

    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier %s.\n",
               nom_de_fichier);
        return;
    }

    fprintf(fichier, "%s\n", message);

    fclose(fichier);

    printf("Le message a ete ecrit dans le fichier %s.\n",
           nom_de_fichier);
}