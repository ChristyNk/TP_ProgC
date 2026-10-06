#include <stdio.h>

struct Couleur
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main()
{
    struct Couleur couleurs[10] =
    {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0x00, 0xff},
        {0xff, 0x00, 0xff, 0xff},
        {0x00, 0xff, 0xff, 0xff},
        {0x80, 0x80, 0x80, 0xff},
        {0xff, 0xff, 0xff, 0xff}
    };

    for (int i = 0; i < 10; i++)
    {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u\n", (unsigned int)couleurs[i].r);
        printf("Vert : %u\n", (unsigned int)couleurs[i].g);
        printf("Bleu : %u\n", (unsigned int)couleurs[i].b);
        printf("Alpha : %u\n\n", (unsigned int)couleurs[i].a);
    }

    return 0;
}