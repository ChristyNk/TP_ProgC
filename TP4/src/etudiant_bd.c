#include <stdio.h>
#include "fichier.h"

struct Etudiant
{
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main()
{
    struct Etudiant etudiants[5];

    FILE *reset = fopen("etudiant.txt", "w");

    if (reset == NULL)
    {
        printf("Erreur lors de la creation du fichier.\n");
        return 1;
    }

    fclose(reset);

    for (int i = 0; i < 5; i++)
    {
        printf("\nEtudiant %d :\n", i + 1);

        printf("Nom : ");
        scanf(" %49s", etudiants[i].nom);

        printf("Prenom : ");
        scanf(" %49s", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %99[^\n]", etudiants[i].adresse);

        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);

        char ligne[300];

        snprintf(
            ligne,
            sizeof(ligne),
            "%s;%s;%s;%.2f;%.2f\n",
            etudiants[i].nom,
            etudiants[i].prenom,
            etudiants[i].adresse,
            etudiants[i].note1,
            etudiants[i].note2
        );

        ecrire_dans_fichier("etudiant.txt", ligne);
    }

    printf("\nLes etudiants ont ete enregistres dans etudiant.txt.\n");

    return 0;
}