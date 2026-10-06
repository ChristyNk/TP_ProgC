#include <stdio.h>
#include <stddef.h>

void afficher_hex(const void *adresse, size_t taille)
{
    const unsigned char *octets = (const unsigned char *)adresse;

    unsigned int test = 1;
    int little_endian = *((unsigned char *)&test);

    printf("0x");

    if (little_endian)
    {
        for (size_t i = taille; i > 0; i--)
        {
            printf("%02x", octets[i - 1]);
        }
    }
    else
    {
        for (size_t i = 0; i < taille; i++)
        {
            printf("%02x", octets[i]);
        }
    }
}

int main()
{
    char c = 'A';
    short s = 100;
    int i = 1000;
    long int l = 10000;
    long long int ll = 100000;
    float f = 2.0f;
    double d = 4.0;
    long double ld = 8.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");

    printf("Adresse de c : %p, Valeur : ", (void *)pc);
    afficher_hex(pc, sizeof(c));
    printf("\n");

    printf("Adresse de s : %p, Valeur : ", (void *)ps);
    afficher_hex(ps, sizeof(s));
    printf("\n");

    printf("Adresse de i : %p, Valeur : ", (void *)pi);
    afficher_hex(pi, sizeof(i));
    printf("\n");

    printf("Adresse de l : %p, Valeur : ", (void *)pl);
    afficher_hex(pl, sizeof(l));
    printf("\n");

    printf("Adresse de ll : %p, Valeur : ", (void *)pll);
    afficher_hex(pll, sizeof(ll));
    printf("\n");

    printf("Adresse de f : %p, Valeur : ", (void *)pf);
    afficher_hex(pf, sizeof(f));
    printf("\n");

    printf("Adresse de d : %p, Valeur : ", (void *)pd);
    afficher_hex(pd, sizeof(d));
    printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void *)pld);
    afficher_hex(pld, sizeof(ld));
    printf("\n");

    *pc = 'B';
    *ps = 200;
    *pi = 2000;
    *pl = 20000;
    *pll = 200000;
    *pf = 1.0f;
    *pd = 2.0;
    *pld = 4.0L;

    printf("\nApres la manipulation :\n");

    printf("Adresse de c : %p, Valeur : ", (void *)pc);
    afficher_hex(pc, sizeof(c));
    printf("\n");

    printf("Adresse de s : %p, Valeur : ", (void *)ps);
    afficher_hex(ps, sizeof(s));
    printf("\n");

    printf("Adresse de i : %p, Valeur : ", (void *)pi);
    afficher_hex(pi, sizeof(i));
    printf("\n");

    printf("Adresse de l : %p, Valeur : ", (void *)pl);
    afficher_hex(pl, sizeof(l));
    printf("\n");

    printf("Adresse de ll : %p, Valeur : ", (void *)pll);
    afficher_hex(pll, sizeof(ll));
    printf("\n");

    printf("Adresse de f : %p, Valeur : ", (void *)pf);
    afficher_hex(pf, sizeof(f));
    printf("\n");

    printf("Adresse de d : %p, Valeur : ", (void *)pd);
    afficher_hex(pd, sizeof(d));
    printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void *)pld);
    afficher_hex(pld, sizeof(ld));
    printf("\n");

    return 0;
}