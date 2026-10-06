#include <stdio.h>

struct Couleur
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurComptee
{
    struct Couleur couleur;
    int nombre;
};

int meme_couleur(struct Couleur c1, struct Couleur c2)
{
    return c1.r == c2.r &&
           c1.g == c2.g &&
           c1.b == c2.b &&
           c1.a == c2.a;
}

int main(void)
{
    struct Couleur couleurs[100];
    struct CouleurComptee distinctes[100];

    int nombreDistinctes = 0;

    /* Remplissage du tableau de 100 couleurs */
    for (int i = 0; i < 100; i++)
    {
        if (i % 4 == 0)
        {
            couleurs[i] = (struct Couleur){0xff, 0x23, 0x23, 0x45};
        }
        else if (i % 4 == 1)
        {
            couleurs[i] = (struct Couleur){0xff, 0x00, 0x23, 0x12};
        }
        else if (i % 4 == 2)
        {
            couleurs[i] = (struct Couleur){0x00, 0xff, 0x00, 0xff};
        }
        else
        {
            couleurs[i] = (struct Couleur){0x00, 0x00, 0xff, 0xff};
        }
    }

    /* Recherche des couleurs distinctes */
    for (int i = 0; i < 100; i++)
    {
        int trouvee = 0;

        for (int j = 0; j < nombreDistinctes; j++)
        {
            if (meme_couleur(couleurs[i], distinctes[j].couleur))
            {
                distinctes[j].nombre++;
                trouvee = 1;
                break;
            }
        }

        if (!trouvee)
        {
            distinctes[nombreDistinctes].couleur = couleurs[i];
            distinctes[nombreDistinctes].nombre = 1;
            nombreDistinctes++;
        }
    }

    /* Affichage */
    printf("Couleurs distinctes :\n");

    for (int i = 0; i < nombreDistinctes; i++)
    {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].nombre);
    }
}