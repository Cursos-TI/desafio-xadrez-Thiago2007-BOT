#include <stdio.h>

int main() {
    int i, j;

    // ===== TORRE =====
    printf("=== Movimento da TORRE ===\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ===== BISPO =====
    printf("\n=== Movimento do BISPO ===\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // ===== RAINHA ===== 
    printf("\n=== Movimento da RAINHA ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    // ===== CAVALO =====
    printf("\n=== Movimento do CAVALO ===\n");

    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Loop externo (for): movimento para baixo
    for (i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");

        if (i == casasBaixo) {
            j = 1;
            while (j <= casasEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
