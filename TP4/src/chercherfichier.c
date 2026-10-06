#include <stdio.h>
#include <string.h>

int main(void)
{
    char nom_fichier[100];
    char phrase[100];
    char ligne[500];
    FILE *fichier;
    int numero_ligne = 0;

    printf("Entrez le nom du fichier : ");
    scanf("%99s", nom_fichier);

    /* Supprimer le \n restant dans stdin */
    getchar();

    printf("Entrez la phrase que vous souhaitez rechercher : ");
    fgets(phrase, sizeof(phrase), stdin);

    /* Supprimer le retour à la ligne */
    phrase[strcspn(phrase, "\n")] = '\0';

    fichier = fopen(nom_fichier, "r");

    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }

    printf("\nResultats de la recherche :\n");

    while (fgets(ligne, sizeof(ligne), fichier) != NULL)
    {
        int nombre = 0;
        char *position = ligne;

        numero_ligne++;

        /* Chercher toutes les occurrences dans la ligne */
        while ((position = strstr(position, phrase)) != NULL)
        {
            nombre++;
            position++;
        }

        if (nombre > 0)
        {
            printf("Ligne %d, %d fois\n", numero_ligne, nombre);
        }
    }

    fclose(fichier);

}