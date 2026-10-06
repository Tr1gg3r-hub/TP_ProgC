#include <stdio.h>

int main(void)
{
    char noms[5][30] = {
        "Dupont",
        "Martin",
        "Bernard",
        "Petit",
        "Robert"
    };

    char prenoms[5][30] = {
        "Alice",
        "Thomas",
        "Sophie",
        "Lucas",
        "Emma"
    };

    char adresses[5][100] = {
        "10 rue de Paris",
        "25 avenue Victor Hugo",
        "8 rue des Lilas",
        "15 boulevard de la Liberte",
        "3 rue Pasteur"
    };

    float notesC[5] = {
        15.5,
        12.0,
        17.5,
        14.0,
        16.5
    };

    float notesSysteme[5] = {
        14.0,
        13.5,
        16.0,
        11.5,
        18.0
    };

    for (int i = 0; i < 5; i++)
    {
        printf("Etudiant %d\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation C : %.2f\n", notesC[i]);
        printf("Note en Systeme d'exploitation : %.2f\n", notesSysteme[i]);
        printf("-----------------------------\n");
    }
}