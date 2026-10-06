#include <stdio.h>

int main()
{
    const char *phrases[10] =
    {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[] = "La programmation en C est amusante.";

    int trouvee = 0;

    for (int i = 0; i < 10; i++)
    {
        int j = 0;

        while (phrases[i][j] != '\0' &&
               recherche[j] != '\0' &&
               phrases[i][j] == recherche[j])
        {
            j++;
        }

        if (phrases[i][j] == '\0' && recherche[j] == '\0')
        {
            trouvee = 1;
            break;
        }
    }

    if (trouvee)
    {
        printf("Phrase trouvee\n");
    }
    else
    {
        printf("Phrase non trouvee\n");
    }

    return 0;
}