#include <stdio.h>
#include <stdlib.h>  // Pour utiliser rand() et srand()
#include <time.h>    // Pour utiliser time() afin de changer la graine du générateur aléatoire

// Fonction qui retourne la valeur minimale dans un tableau
int mini(int t[], int size) {
    int min = t[0];  // On suppose que la première valeur est la plus petite
    for (int i = 1; i < size; i++) {
        if (t[i] < min) {
            min = t[i];  // Si une valeur plus petite est trouvée, on met à jour min
        }
    }
    return min;  // Retourne la plus petite valeur trouvée
}

// Fonction qui retourne l'indice de la valeur minimale du tableau
int imini(int t[], int size) {
    int min_index = 0;
    for (int i = 1; i < size; i++) {
        if (t[i] < t[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

// Fonction qui retourne la valeur maximale du tableau
int maxi(int t[], int size) {
    int max = t[0];
    for (int i = 1; i < size; i++) {
        if (t[i] > max) {
            max = t[i];
        }
    }
    return max;
}

// Fonction qui retourne l'indice de la valeur maximale du tableau
int imaxi(int t[], int size) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (t[i] > t[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

// Fonction qui retourne la somme des éléments du tableau
int somme(int t[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += t[i];
    }
    return sum;
}

// Fonction qui retourne la moyenne des éléments du tableau
double moyenne(int t[], int size) {
    // Utilisation de la fonction somme() pour éviter la redondance
    return (double) somme(t, size) / size;
}

// Fonction qui compte le nombre d'éléments compris entre deux bornes (lowest et highest)
int compte(int t[], int size, int lowest, int highest) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (t[i] >= lowest && t[i] <= highest) {
            count++;
        }
    }
    return count;
}
int est_trie(int t[], int size) {
    int croissant = 1, decroissant = 1;

    for (int i = 1; i < size; i++) {
        if (t[i] < t[i - 1]) {
            croissant = 0;
        }
        if (t[i] > t[i - 1]) {
            decroissant = 0;
        }
    }

    if (croissant) return 1;
    if (decroissant) return -1;
    return 0;
}

int main() {
    int t[100];  // Déclare un tableau de 100 entiers
    int size = 10;  // Taille effective du tableau initialisé à 10
    // Boucle pour remplir le tableau de valeurs aléatoires entre 0 et 49
    printf("Valeurs du tableau :\n");
    for (int i = 0; i < size; i++) {
        t[i] = rand() % 50;  // Remplit le tableau avec des nombres aléatoires entre 0 et 49
        printf("%d ", t[i]);  // Affiche chaque valeur générée
    }
    printf("\n");
 // Appel de la fonction mini() et affichage du résultat
    printf("Valeur minimale : %d\n", mini(t, size));
    
    // Appel de la fonction imini() et affichage du résultat
    printf("Indice de la valeur minimale : %d\n", imini(t, size));
    
    // Appel de la fonction maxi() et affichage du résultat
    printf("Valeur maximale : %d\n", maxi(t, size));
    
    // Appel de la fonction imaxi() et affichage du résultat
    printf("Indice de la valeur maximale : %d\n", imaxi(t, size));
    
    // Appel de la fonction somme() et affichage du résultat
    printf("Somme des valeurs : %d\n", somme(t, size));
    
    // Appel de la fonction moyenne() et affichage du résultat
    printf("Moyenne des valeurs : %.2f\n", moyenne(t, size));
    
    // Appel de la fonction compte() avec des bornes choisies (ici entre 10 et 30)
    printf("Nombre d'éléments entre 10 et 30 : %d\n", compte(t, size, 10, 30));

    // Tableau non trié
    printf("\nTest avec tableau non trié :\n");
    int non_trie[] = {12, 25, 47, 8, 19, 30, 22, 6, 11, 37};
    printf("Tableau non trié : %d\n", est_trie(non_trie, 10));

    // Tableau trié croissant
    printf("\nTest avec tableau trié croissant :\n");
    int croissant[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Tableau croissant : %d\n", est_trie(croissant, 10));

    // Tableau trié décroissant
    printf("\nTest avec tableau trié décroissant :\n");
    int decroissant[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    printf("Tableau décroissant : %d\n", est_trie(decroissant, 10));


    return 0;
}
