#include <stdio.h>
#include <string.h>

#include "operator.h"
#include "fichier.h"
#include "liste.h"

void vider_buffer(void)
{
    int c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void exercice_41(void)
{
    int num1;
    int num2;
    char op;
    int resultat;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            resultat = somme(num1, num2);
            break;

        case '-':
            resultat = difference(num1, num2);
            break;

        case '*':
            resultat = produit(num1, num2);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Erreur : division par zero.\n");
                return;
            }

            resultat = quotient(num1, num2);
            break;

        case '%':
            if (num2 == 0)
            {
                printf("Erreur : modulo par zero.\n");
                return;
            }

            resultat = modulo(num1, num2);
            break;

        case '&':
            resultat = et(num1, num2);
            break;

        case '|':
            resultat = ou(num1, num2);
            break;

        case '~':
            resultat = negation(num1, num2);
            break;

        default:
            printf("Operateur inconnu.\n");
            return;
    }

    printf("Resultat : %d\n", resultat);
}

void exercice_42(void)
{
    int choix;
    char nom_fichier[256];
    char message[1024];

    printf("1. Lire un fichier\n");
    printf("2. Ecrire dans un fichier\n");
    printf("Votre choix : ");

    scanf("%d", &choix);

    if (choix == 1)
    {
        printf("Nom du fichier : ");
        scanf("%255s", nom_fichier);

        lire_fichier(nom_fichier);
    }
    else if (choix == 2)
    {
        printf("Nom du fichier : ");
        scanf("%255s", nom_fichier);

        vider_buffer();

        printf("Message : ");
        fgets(message, sizeof(message), stdin);

        ecrire_dans_fichier(nom_fichier, message);
    }
    else
    {
        printf("Choix invalide.\n");
    }
}

void exercice_47(void)
{
    struct liste_couleurs liste;

    init_liste(&liste);

    struct couleur couleurs[10] =
    {
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0x00, 0xff},
        {0xff, 0x00, 0xff, 0xff},
        {0x00, 0xff, 0xff, 0xff},
        {0xff, 0xff, 0xff, 0xff},
        {0x00, 0x00, 0x00, 0xff},
        {0x80, 0x80, 0x80, 0xff},
        {0xff, 0x80, 0x00, 0xff}
    };

    for (int i = 0; i < 10; i++)
    {
        insertion(&couleurs[i], &liste);
    }

    printf("Liste des couleurs :\n");

    parcours(&liste);

    liberer_liste(&liste);
}

int main()
{
    int exercice;

    printf("Choisissez un exercice :\n");
    printf("1 - Exercice 4.1\n");
    printf("2 - Exercice 4.2\n");
    printf("7 - Exercice 4.7\n");
    printf("Votre choix : ");

    scanf("%d", &exercice);

    switch (exercice)
    {
        case 1:
            exercice_41();
            break;

        case 2:
            exercice_42();
            break;

        case 7:
            exercice_47();
            break;

        default:
            printf("Exercice invalide.\n");
    }

    return 0;
}
