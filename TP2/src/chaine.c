#include <stdio.h>

int main(void)
{
    char chaine1[100];
    char chaine2[100];
    char copie[100];

    int longueur = 0;
    int i = 0;
    int j = 0;

    printf("Entrez la premiere chaine : ");
    scanf("%99[^\n]", chaine1);

    printf("Entrez la deuxieme chaine : ");
    scanf(" %99[^\n]", chaine2);

    /* Calcul de la longueur de chaine1 */
    while (chaine1[longueur] != '\0')
    {
        longueur++;
    }

    printf("Longueur de la premiere chaine : %d\n", longueur);

    /* Copie de chaine1 dans copie */
    i = 0;

    while (chaine1[i] != '\0')
    {
        copie[i] = chaine1[i];
        i++;
    }

    copie[i] = '\0';

    printf("Copie : %s\n", copie);

    /* Recherche de la fin de chaine1 */
    i = 0;

    while (chaine1[i] != '\0')
    {
        i++;
    }

    /* Ajout de chaine2 a la fin de chaine1 */
    j = 0;

    while (chaine2[j] != '\0')
    {
        chaine1[i] = chaine2[j];
        i++;
        j++;
    }

    chaine1[i] = '\0';

    printf("Concatenation : %s\n", chaine1);

}