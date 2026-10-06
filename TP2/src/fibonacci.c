#include <stdio.h>

int main()
{
    int n = 7;
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++)
    {
        printf("%d", a);

        if (i < n - 1)
        {
            printf(", ");
        }

        int suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n");

    return 0;
}
