#include <stdio.h>
#include "calculatrice.h"

void calculatrice() {
    double a, b;
    char op;
    printf("Entrez une opération (ex: 3 + 4): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch(op) {
        case '+': printf("Résultat = %.2lf\n", a + b); break;
        case '-': printf("Résultat = %.2lf\n", a - b); break;
        case '*': printf("Résultat = %.2lf\n", a * b); break;
        case '/': 
            if (b != 0) printf("Résultat = %.2lf\n", a / b);
            else printf("Erreur : division par zéro\n");
            break;
        default: printf("Opérateur non reconnu\n");
    }
}