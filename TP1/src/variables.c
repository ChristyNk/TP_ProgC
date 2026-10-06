#include <stdio.h>

int main()
{
    char caractere = 'A';
    signed char caractere_signe = -10;
    unsigned char caractere_non_signe = 200;

    short petit_entier = -1000;
    signed short petit_entier_signe = -2000;
    unsigned short petit_entier_non_signe = 50000;

    int entier = -100000;
    signed int entier_signe = -200000;
    unsigned int entier_non_signe = 300000;

    long int entier_long = -1000000;
    signed long int entier_long_signe = -2000000;
    unsigned long int entier_long_non_signe = 3000000;

    long long int entier_tres_long = -1000000000;
    signed long long int entier_tres_long_signe = -2000000000;
    unsigned long long int entier_tres_long_non_signe = 3000000000ULL;

    float nombre_float = 3.14f;
    double nombre_double = 3.14159;
    long double nombre_long_double = 3.1415926535L;

    printf("char : %c\n", caractere);
    printf("signed char : %hhd\n", caractere_signe);
    printf("unsigned char : %hhu\n", caractere_non_signe);

    printf("short : %hd\n", petit_entier);
    printf("signed short : %hd\n", petit_entier_signe);
    printf("unsigned short : %hu\n", petit_entier_non_signe);

    printf("int : %d\n", entier);
    printf("signed int : %d\n", entier_signe);
    printf("unsigned int : %u\n", entier_non_signe);

    printf("long int : %ld\n", entier_long);
    printf("signed long int : %ld\n", entier_long_signe);
    printf("unsigned long int : %lu\n", entier_long_non_signe);

    printf("long long int : %lld\n", entier_tres_long);
    printf("signed long long int : %lld\n", entier_tres_long_signe);
    printf("unsigned long long int : %llu\n", entier_tres_long_non_signe);

    printf("float : %.2f\n", nombre_float);
    printf("double : %.5f\n", nombre_double);
    printf("long double : %.10Lf\n", nombre_long_double);

    return 0;
}