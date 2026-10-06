#include <stdio.h>

int main()
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int bits[32];

    for (int i = 0; i < 5; i++)
    {
        int nombre = nombres[i];
        int temp = nombre;
        int compteur = 0;

        printf("%d en binaire : ", nombre);

        if (nombre == 0)
        {
            printf("0");
        }
        else
        {
            for (; temp > 0; temp = temp / 2)
            {
                bits[compteur] = temp % 2;
                compteur++;
            }

            for (int j = compteur - 1; j >= 0; j--)
            {
                printf("%d", bits[j]);
            }
        }

        printf("\n");
    }

    return 0;
}