#include <stdio.h>

int main() {
    int i;

    // ===== Torre =====
    printf("=== Movimento da TORRE ===\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ===== Bispo =====
    printf("\n=== Movimento do BISPO ===\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // ===== Rainha =====
    printf("\n=== Movimento da RAINHA ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}
