#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tableau[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        tableau[i] = rand() % 1000;
    }

    printf("Tableau non trie :\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n");

    for (int i = 0; i < 99; i++)
    {
        for (int j = 0; j < 99 - i; j++)
        {
            if (tableau[j] > tableau[j + 1])
            {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("\nTableau trie :\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", tableau[i]);
    }

    printf("\n");

    return 0;
}