#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main()
{
    int entiers[TAILLE];
    float flottants[TAILLE];

    int *pi = entiers;
    float *pf = flottants;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++)
    {
        *(pi + i) = rand() % 100;
        *(pf + i) = (rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers avant :\n");

    for (int i = 0; i < TAILLE; i++)
    {
        printf("%d ", *(pi + i));
    }

    printf("\n\nTableau de flottants avant :\n");

    for (int i = 0; i < TAILLE; i++)
    {
        printf("%.2f ", *(pf + i));
    }

    for (int i = 0; i < TAILLE; i++)
    {
        if (i % 2 == 0)
        {
            *(pi + i) *= 3;
            *(pf + i) *= 3;
        }
    }

    printf("\n\nTableau d'entiers apres :\n");

    for (int i = 0; i < TAILLE; i++)
    {
        printf("%d ", *(pi + i));
    }

    printf("\n\nTableau de flottants apres :\n");

    for (int i = 0; i < TAILLE; i++)
    {
        printf("%.2f ", *(pf + i));
    }

    printf("\n");

    return 0;
}