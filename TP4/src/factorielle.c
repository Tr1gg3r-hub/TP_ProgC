#include <stdio.h>

int factorielle(int num)
{
    if (num == 0)
    {
        printf("fact(0): 1\n");
        return 1;
    }
    else
    {
        int valeur = num * factorielle(num - 1);

        printf("fact(%d): %d\n", num, valeur);

        return valeur;
    }
}

int main(void)
{
    int n;

    printf("Entrez un entier naturel : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Erreur : la factorielle n'est pas definie pour un nombre negatif.\n");
        return 1;
    }

    printf("\nCalcul de la factorielle de %d :\n", n);

    factorielle(n);

}