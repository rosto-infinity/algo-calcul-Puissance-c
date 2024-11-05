#include <stdio.h>

// Fonction pour calculer a^b
int puissance(int a, int b) {
    int c = 1; // Initialiser c à 1
    for (int i = 0; i < b; i++) {
        c *= a; // Multiplier a par c, b fois
    }
    return c; // Retourner le résultat
}

// Fonction principale pour tester la fonction puissance
int main() {
    int a, b, resultat;

    // Saisir les valeurs de a et b
    printf("Saisir la base (a) : ");
    scanf("%d", &a);
    printf("Saisir l'exposant (b) : ");
    scanf("%d", &b);

    // Appeler la fonction puissance
    resultat = puissance(a, b);

    // Afficher le résultat
    printf("Le résultat de %d élevé à %d est : %d\n", a, b, resultat);

    return 0; // Fin du programme
}
