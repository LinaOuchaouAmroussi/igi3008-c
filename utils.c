// utils.c
#include "utils.h"

// Fonction qui retourne la valeur minimale du tableau
int mini(int t[], int size) {
    int min = t[0];
    for (int i = 1; i < size; i++) {
        if (t[i] < min) {
            min = t[i];
        }
    }
    return min;
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
    return (double) somme(t, size) / size;
}

// Fonction qui compte le nombre d'éléments compris entre deux bornes
int compte(int t[], int size, int lowest, int highest) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (t[i] >= lowest && t[i] <= highest) {
            count++;
        }
    }
    return count;
}
