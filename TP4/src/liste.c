#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(struct liste_couleurs *liste)
{
    liste->premier = NULL;
}

void insertion(struct couleur *couleur, struct liste_couleurs *liste)
{
    struct element *nouvel_element;

    nouvel_element = malloc(sizeof(struct element));

    if (nouvel_element == NULL)
    {
        printf("Erreur : impossible d'allouer de la memoire.\n");
        return;
    }

    nouvel_element->couleur = *couleur;
    nouvel_element->suivant = liste->premier;

    liste->premier = nouvel_element;
}

void parcours(struct liste_couleurs *liste)
{
    struct element *courant = liste->premier;

    while (courant != NULL)
    {
        printf("RGB(%u, %u, %u)\n",
               courant->couleur.r,
               courant->couleur.g,
               courant->couleur.b);

        courant = courant->suivant;
    }
}