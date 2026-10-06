#include <stdio.h>

int main()
{
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[100];
    char concatenation[100];

    int longueur = 0;

    while (chaine1[longueur] != '\0')
    {
        longueur++;
    }

    printf("Longueur : %d\n", longueur);

    int i = 0;

    while (chaine1[i] != '\0')
    {
        copie[i] = chaine1[i];
        i++;
    }

    copie[i] = '\0';

    printf("Copie : %s\n", copie);

    i = 0;

    while (chaine1[i] != '\0')
    {
        concatenation[i] = chaine1[i];
        i++;
    }

    int j = 0;

    while (chaine2[j] != '\0')
    {
        concatenation[i] = chaine2[j];
        i++;
        j++;
    }

    concatenation[i] = '\0';

    printf("Concatenation : %s\n", concatenation);

    return 0;
}
