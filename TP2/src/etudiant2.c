#include <stdio.h>
#include <string.h>

struct Etudiant
{
    char nom[30];
    char prenom[30];
    char adresse[100];
    float noteC;
    float noteSysteme;
};

int main(void)
{
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].noteC = 16.5;
    etudiants[0].noteSysteme = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].noteC = 14.0;
    etudiants[1].noteSysteme = 14.1;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Sophie");
    strcpy(etudiants[2].adresse, "15 Rue Pasteur, Lyon");
    etudiants[2].noteC = 17.5;
    etudiants[2].noteSysteme = 15.0;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "8 Rue des Lilas, Lyon");
    etudiants[3].noteC = 13.5;
    etudiants[3].noteSysteme = 11.5;

    strcpy(etudiants[4].nom, "Robert");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "10 Avenue de la Republique, Lyon");
    etudiants[4].noteC = 15.0;
    etudiants[4].noteSysteme = 16.5;

    for (int i = 0; i < 5; i++)
    {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.1f\n", etudiants[i].noteC);
        printf("Note 2 : %.1f\n", etudiants[i].noteSysteme);
        printf("\n");
    }

}
