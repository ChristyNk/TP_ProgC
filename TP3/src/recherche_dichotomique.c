#include <stdio.h>

int main()
{
    int tableau[100];
    int recherche;

    for (int i = 0; i < 100; i++)
    {
        tableau[i] = i * 2;
    }

    printf("Tableau trie :\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n\nEntrez l'entier que vous souhaitez chercher : ");

    if (scanf("%d", &recherche) != 1)
    {
        return 1;
    }

    int gauche = 0;
    int droite = 99;
    int present = 0;

    while (gauche <= droite)
    {
        int milieu = gauche + (droite - gauche) / 2;

        if (tableau[milieu] == recherche)
        {
            present = 1;
            break;
        }
        else if (tableau[milieu] < recherche)
        {
            gauche = milieu + 1;
        }
        else
        {
            droite = milieu - 1;
        }
    }

    if (present)
    {
        printf("Resultat : entier present\n");
    }
    else
    {
        printf("Resultat : entier absent\n");
    }

    return 0;
}