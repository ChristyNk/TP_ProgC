#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(struct liste_couleurs *liste)
{
    liste->tete = NULL;
}

void insertion(struct couleur *couleur, struct liste_couleurs *liste)
{
    struct noeud *nouveau = malloc(sizeof(struct noeud));

    if (nouveau == NULL)
    {
        printf("Erreur d'allocation memoire.\n");
        return;
    }

    nouveau->couleur = *couleur;
    nouveau->suivant = NULL;

    if (liste->tete == NULL)
    {
        liste->tete = nouveau;
        return;
    }

    struct noeud *courant = liste->tete;

    while (courant->suivant != NULL)
    {
        courant = courant->suivant;
    }

    courant->suivant = nouveau;
}

void parcours(struct liste_couleurs *liste)
{
    struct noeud *courant = liste->tete;
    int i = 1;

    while (courant != NULL)
    {
        printf(
            "Couleur %d : R=%u G=%u B=%u A=%u\n",
            i,
            courant->couleur.r,
            courant->couleur.g,
            courant->couleur.b,
            courant->couleur.a
        );

        courant = courant->suivant;
        i++;
    }
}

void liberer_liste(struct liste_couleurs *liste)
{
    struct noeud *courant = liste->tete;

    while (courant != NULL)
    {
        struct noeud *suivant = courant->suivant;
        free(courant);
        courant = suivant;
    }

    liste->tete = NULL;
}