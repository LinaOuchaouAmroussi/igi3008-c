#include <stdio.h>

// Fonction qui vérifie si un nombre est premier
int isprime(int p) {
    if (p < 2) return 0;  // Les nombres inférieurs à 2 ne sont pas premiers
    for (int i = 2; i * i <= p; i++) {  // Vérifie les diviseurs jusqu'à √p
        if (p % i == 0) return 0;  // Si p est divisible par i, il n'est pas premier
    }
    return 1;  // Si aucun diviseur n'est trouvé, p est premier
}

int main() {
    int n = 100;  // Limite des nombres premiers
    printf("Il y a %d nombres premiers strictement inférieurs à %d.\n", 
        ({
            int prime_count = 0;  // Variable interne pour compter les nombres premiers
            for (int i = 2; i < n; i++) {
                if (isprime(i)) {
                    prime_count++;  // Incrémentation dans la même expression
                }
            }
            prime_count;  // Retourne le nombre de nombres premiers
        }), n);
    
    return 0;
}
