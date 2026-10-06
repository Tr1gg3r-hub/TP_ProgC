#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int tableauInt[10];
    float tableauFloat[10];

    int *ptrInt;
    float *ptrFloat;

    /* Initialisation du générateur aléatoire */
    srand(time(NULL));

    /* Remplissage des tableaux */
    ptrInt = tableauInt;
    ptrFloat = tableauFloat;

    for (int i = 0; i < 10; i++)
    {
        *ptrInt = rand() % 100;
        *ptrFloat = (float)(rand() % 100) / 10.0f;

        ptrInt++;
        ptrFloat++;
    }

    /* Affichage avant modification */
    printf("Tableau d'entiers avant la multiplication par 3 :\n");

    ptrInt = tableauInt;

    for (int i = 0; i < 10; i++)
    {
        printf("%d", *ptrInt);

        if (i < 9)
            printf(", ");

        ptrInt++;
    }

    printf("\n\n");

    printf("Tableau de floats avant la multiplication par 3 :\n");

    ptrFloat = tableauFloat;

    for (int i = 0; i < 10; i++)
    {
        printf("%.2f", *ptrFloat);

        if (i < 9)
            printf(", ");

        ptrFloat++;
    }

    printf("\n\n");

    /* Multiplication par 3 des indices pairs */
    ptrInt = tableauInt;
    ptrFloat = tableauFloat;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            *ptrInt = *ptrInt * 3;
            *ptrFloat = *ptrFloat * 3;
        }

        ptrInt++;
        ptrFloat++;
    }

    /* Affichage après modification */
    printf("Tableau d'entiers apres la multiplication par 3 :\n");

    ptrInt = tableauInt;

    for (int i = 0; i < 10; i++)
    {
        printf("%d", *ptrInt);

        if (i < 9)
            printf(", ");

        ptrInt++;
    }

    printf("\n\n");

    printf("Tableau de floats apres la multiplication par 3 :\n");

    ptrFloat = tableauFloat;

    for (int i = 0; i < 10; i++)
    {
        printf("%.2f", *ptrFloat);

        if (i < 9)
            printf(", ");

        ptrFloat++;
    }

    printf("\n");

}