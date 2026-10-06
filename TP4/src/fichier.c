#include <stdio.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier)
{
    FILE *fichier = fopen(nom_de_fichier, "r");

    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir %s\n", nom_de_fichier);
        return;
    }

    char ligne[1024];

    printf("Contenu du fichier %s :\n", nom_de_fichier);

    while (fgets(ligne, sizeof(ligne), fichier) != NULL)
    {
        printf("%s", ligne);
    }

    fclose(fichier);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message)
{
    FILE *fichier = fopen(nom_de_fichier, "a");

    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir %s\n", nom_de_fichier);
        return;
    }

    fprintf(fichier, "%s", message);

    fclose(fichier);

    printf("Le message a ete ecrit dans %s.\n", nom_de_fichier);
}