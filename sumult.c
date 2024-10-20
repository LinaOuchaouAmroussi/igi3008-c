#include <stdio.h>

// Fonction qui calcule la somme et le produit de deux nombres
void sumult(int a, int b, int *sum, int *product) {
    *sum = a + b;        // Calcule la somme et stocke dans *sum
    *product = a * b;    // Calcule le produit et stocke dans *product
}

int main() {
    int a = 3, b = 4;  // Les deux nombres à traiter
    int sum, product;  // Variables pour stocker les résultats

    // Appel de la fonction sumult() avec les adresses des variables sum et product
    sumult(a, b, &sum, &product);

    // Affichage des résultats
    printf(" %d+%d = %d\n", a, b, sum);
    printf(" %dx%d= %d\n", a, b, product);

    return 0;
}
