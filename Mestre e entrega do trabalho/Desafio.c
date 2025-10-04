#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int verticais, int horizontais) {
    if (verticais == 0) return;

    for (int i = 0; i < horizontais; i++) {
        printf("Cima, Direita\n");
    }

    moverBispo(verticais - 1, horizontais);
}

void moverCavalo() {
    int i, j;
    printf("Movimento do Cavalo:\n");

    for (i = 1; i <= 2; i++) {
        printf("Cima\n");
        if (i == 1 && i % 2 == 0) continue;
    }

    for (j = 1; j <= 1; j++) {
        if (j == 1) {
            printf("Direita\n");
            break;
        }
    }
}

// ===== Função Principal =====
int main() {
    printf("=== Movimento da TORRE ===\n");
    moverTorre(5);

    printf("\n=== Movimento do BISPO ===\n");
    moverBispo(3, 1);

    printf("\n=== Movimento da RAINHA ===\n");
    moverRainha(8);

    printf("\n=== Movimento do CAVALO ===\n");
    moverCavalo();

    return 0;
}
