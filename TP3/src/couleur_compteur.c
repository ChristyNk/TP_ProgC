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
    int occurrences;
};

int main()
{
    struct Couleur couleurs[100];
    struct CouleurComptee distinctes[100];

    int nombre_distinctes = 0;

    for (int i = 0; i < 100; i++)
    {
        switch (i % 5)
        {
            case 0:
                couleurs[i] = (struct Couleur){0xff, 0x23, 0x23, 0x45};
                break;

            case 1:
                couleurs[i] = (struct Couleur){0xff, 0x00, 0x23, 0x12};
                break;

            case 2:
                couleurs[i] = (struct Couleur){0x00, 0xff, 0x00, 0xff};
                break;

            case 3:
                couleurs[i] = (struct Couleur){0x00, 0x00, 0xff, 0xff};
                break;

            default:
                couleurs[i] = (struct Couleur){0xff, 0xff, 0xff, 0xff};
                break;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        int trouvee = 0;

        for (int j = 0; j < nombre_distinctes; j++)
        {
            if (couleurs[i].r == distinctes[j].couleur.r &&
                couleurs[i].g == distinctes[j].couleur.g &&
                couleurs[i].b == distinctes[j].couleur.b &&
                couleurs[i].a == distinctes[j].couleur.a)
            {
                distinctes[j].occurrences++;
                trouvee = 1;
                break;
            }
        }

        if (!trouvee)
        {
            distinctes[nombre_distinctes].couleur = couleurs[i];
            distinctes[nombre_distinctes].occurrences = 1;
            nombre_distinctes++;
        }
    }

    printf("Couleurs distinctes :\n\n");

    for (int i = 0; i < nombre_distinctes; i++)
    {
        printf(
            "0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
            distinctes[i].couleur.r,
            distinctes[i].couleur.g,
            distinctes[i].couleur.b,
            distinctes[i].couleur.a,
            distinctes[i].occurrences
        );
    }

    return 0;
}