#include <stdio.h>

int main() {
    // ============================
    // Movimento da TORRE
    // Move 5 casas para a DIREITA
    // Usa estrutura FOR
    // ============================
    int i;
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // ============================
    // Movimento do BISPO
    // Move 5 casas na DIAGONAL (CIMA + DIREITA)
    // Usa estrutura WHILE
    // ============================
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ============================
    // Movimento da RAINHA
    // Move 8 casas para a ESQUERDA
    // Usa estrutura DO-WHILE
    // ============================
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < 8);

    return 0;
}
