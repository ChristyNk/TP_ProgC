#include <stdio.h>

int main()
{
    unsigned int d = 0x10001000;
    int nb_bits = sizeof(d) * 8;

    int bit4 = (d >> (nb_bits - 4)) & 1;
    int bit20 = (d >> (nb_bits - 20)) & 1;

    printf("%d\n", bit4 == 1 && bit20 == 1);

    return 0;
}
