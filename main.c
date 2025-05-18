#include <stdio.h>
#include "calculatrice.h"

int main() {
    int continuer = 1;
    while (continuer) {
        calculatrice();
        printf("Voulez-vous faire un autre calcul ? (1: Oui, 0: Non) : ");
        scanf("%d", &continuer);
    }
    printf("Au revoir !\n");
    return 0;
}