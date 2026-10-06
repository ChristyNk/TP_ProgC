#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char nom_fichier[256];

    if (argc >= 2)
    {
        snprintf(nom_fichier, sizeof(nom_fichier), "%s", argv[1]);
    }
    else
    {
        printf("Nom du fichier : ");
        scanf("%255s", nom_fichier);
    }

    FILE *fichier = fopen(nom_fichier, "r");

    if (fichier == NULL)
    {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }

    char phrase[256];

    printf("Entrez la phrase que vous souhaitez rechercher : ");

    int c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    fgets(phrase, sizeof(phrase), stdin);

    phrase[strcspn(phrase, "\n")] = '\0';

    if (phrase[0] == '\0')
    {
        printf("La phrase ne peut pas etre vide.\n");
        fclose(fichier);
        return 1;
    }

    char ligne[1024];
    int numero_ligne = 0;

    printf("\nResultats de la recherche :\n");

    while (fgets(ligne, sizeof(ligne), fichier) != NULL)
    {
        numero_ligne++;

        int occurrences = 0;
        char *position = ligne;

        while ((position = strstr(position, phrase)) != NULL)
        {
            occurrences++;
            position += strlen(phrase);
        }

        if (occurrences > 0)
        {
            printf(
                "Ligne %d, %d fois\n",
                numero_ligne,
                occurrences
            );
        }
    }

    fclose(fichier);

    return 0;
}