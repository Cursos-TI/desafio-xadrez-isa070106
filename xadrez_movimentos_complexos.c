#include <stdio.h>

// ===============================================
// Função recursiva para movimentar a TORRE
// Move para a Direita N vezes
// ===============================================
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ===============================================
// Função recursiva para movimentar a RAINHA
// Move para a Esquerda N vezes
// ===============================================
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ===============================================
// Função recursiva + loops aninhados para o BISPO
// Move diagonalmente (Cima Direita) N vezes
// Loop externo simula o movimento vertical
// Loop interno simula o movimento horizontal
// ===============================================
void moverBispo(int casas) {
    if (casas == 0) return;

    for (int v = 0; v < 1; v++) { // Simula 1 passo na vertical (Cima)
        for (int h = 0; h < 1; h++) { // Simula 1 passo na horizontal (Direita)
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ===============================================
// Movimento complexo do CAVALO
// Move 2 casas para cima e 1 para a direita (em "L")
// Usa loops aninhados, múltiplas variáveis e break/continue
// ===============================================
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentos = 1; // Pode mudar esse valor para mais movimentos

    for (int m = 0; m < movimentos; m++) {
        int casasCima = 0;
        for (int i = 0; i < 3; i++) {
            if (i == 2) break; // Após 2 passos para cima, sai do loop
            printf("Cima\n");
            casasCima++;
        }

        int casasDireita = 0;
        while (casasDireita < 1) {
            if (casasCima < 2) {
                // Garante que o movimento em L só acontece se subiu 2
                break;
            }
            printf("Direita\n");
            casasDireita++;
        }
    }
}

// ===============================================
// Função principal
// ===============================================
int main() {
    // ----------------------------
    // Torre - 5 casas para a Direita (recursivo)
    // ----------------------------
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // ----------------------------
    // Bispo - 5 casas na Diagonal Cima Direita (recursivo + loop aninhado)
    // ----------------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // ----------------------------
    // Rainha - 8 casas para a Esquerda (recursivo)
    // ----------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // ----------------------------
    // Cavalo - movimento em L: 2 para Cima + 1 para Direita
    // Loops aninhados com múltiplas variáveis e condições
    // ----------------------------
    printf("\n");
    moverCavalo();

    return 0;
}
