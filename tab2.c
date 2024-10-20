// tab2.c
#include <stdio.h>
#include <stdlib.h>  // Pour rand()
#include "utils.h"   // Inclusion du fichier d'en-tête utils.h

int main() {
    // Déclaration du tableau et initialisation de la taille
    int t[100];  // tableau capable de stocker 100 valeurs
    int size = 10;  // taille effective du tableau, initialisée à 10

    // Initialisation du tableau avec des valeurs aléatoires entre 0 et 49
    printf("Valeurs du tableau :\n");
    for (int i = 0; i < size; i++) {
        t[i] = rand() % 50;  // valeurs entre 0 et 49
        printf("%d ", t[i]);  // affichage de chaque valeur
    }
    printf("\n");

    // Appel des fonctions définies dans utils.c via utils.h
    printf("Valeur minimale : %d\n", mini(t, size));
    printf("Indice de la valeur minimale : %d\n", imini(t, size));
    printf("Valeur maximale : %d\n", maxi(t, size));
    printf("Indice de la valeur maximale : %d\n", imaxi(t, size));
    printf("Somme des valeurs : %d\n", somme(t, size));
    printf("Moyenne des valeurs : %.2f\n", moyenne(t, size));
    printf("Nombre d'éléments entre 10 et 30 : %d\n", compte(t, size, 10, 30));

    return 0;
}