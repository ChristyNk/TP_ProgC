#include <stdio.h>

int main()
{
    char identites[5][2][50] =
    {
        {"Dupont", "Marie"},
        {"Martin", "Pierre"},
        {"Durand", "Alice"},
        {"Bernard", "Lucas"},
        {"Robert", "Emma"}
    };

    char adresses[5][100] =
    {
        "20 Boulevard Niels Bohr, Lyon",
        "22 Boulevard Niels Bohr, Lyon",
        "24 Boulevard Niels Bohr, Lyon",
        "26 Boulevard Niels Bohr, Lyon",
        "28 Boulevard Niels Bohr, Lyon"
    };

    float notes_prog[5] = {16.5, 14.0, 12.5, 18.0, 15.5};
    float notes_systeme[5] = {12.1, 14.1, 15.0, 16.5, 13.5};

    for (int i = 0; i < 5; i++)
    {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", identites[i][0]);
        printf("Prenom : %s\n", identites[i][1]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Programmation C : %.1f\n", notes_prog[i]);
        printf("Systeme d'exploitation : %.1f\n\n", notes_systeme[i]);
    }

    return 0;
}