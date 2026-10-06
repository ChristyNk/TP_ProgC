#include <stdio.h>

int factorielle(int num)
{
    if (num == 0)
    {
        printf("fact(0): 1\n");
        return 1;
    }

    int valeur = num * factorielle(num - 1);

    printf("fact(%d): %d\n", num, valeur);

    return valeur;
}

int main()
{
    printf("Factorielle de 5 :\n");
    int resultat1 = factorielle(5);
    printf("5! = %d\n\n", resultat1);

    printf("Factorielle de 6 :\n");
    int resultat2 = factorielle(6);
    printf("6! = %d\n", resultat2);

    return 0;
}