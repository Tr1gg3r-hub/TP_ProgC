#include <stdio.h>
#include "liste.h"

int main(void)
{
    struct liste_couleurs ma_liste;

    struct couleur couleur1 = {255, 0, 0};
    struct couleur couleur2 = {0, 255, 0};
    struct couleur couleur3 = {0, 0, 255};
    struct couleur couleur4 = {255, 255, 0};
    struct couleur couleur5 = {255, 0, 255};
    struct couleur couleur6 = {0, 255, 255};
    struct couleur couleur7 = {255, 255, 255};
    struct couleur couleur8 = {128, 128, 128};
    struct couleur couleur9 = {0, 0, 0};
    struct couleur couleur10 = {128, 0, 0};

    init_liste(&ma_liste);

    insertion(&couleur1, &ma_liste);
    insertion(&couleur2, &ma_liste);
    insertion(&couleur3, &ma_liste);
    insertion(&couleur4, &ma_liste);
    insertion(&couleur5, &ma_liste);
    insertion(&couleur6, &ma_liste);
    insertion(&couleur7, &ma_liste);
    insertion(&couleur8, &ma_liste);
    insertion(&couleur9, &ma_liste);
    insertion(&couleur10, &ma_liste);

    printf("Liste des couleurs :\n");

    parcours(&ma_liste);

}