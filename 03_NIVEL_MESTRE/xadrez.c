#include <stdio.h>

// ----------- Função Recursiva para a Torre (direita) -----------
void moverTorre(int casa, int limite) {
    if (casa > limite) return;
    printf("Casa %d: Direita\n", casa);
    moverTorre(casa + 1, limite);
}

// ----------- Função Recursiva para a Rainha (esquerda) -----------
void moverRainha(int casa, int limite) {
    if (casa > limite) return;
    printf("Casa %d: Esquerda\n", casa);
    moverRainha(casa + 1, limite);
}

// ----------- Função Recursiva para o Bispo (chamada inicial) -----------
void moverBispoDiagonal(int linha, int coluna, int max_linha, int max_coluna) {
    if (linha > max_linha || coluna > max_coluna) return;
    printf("Casa %d,%d: Cima + Direita\n", linha, coluna);
    moverBispoDiagonal(linha + 1, coluna + 1, max_linha, max_coluna);
}

// ----------- Movimento do Cavalo (2 cima + 1 direita) com loops aninhados e múltiplas variáveis -----------
void moverCavalo() {
    printf("\nMovimentacao do Cavalo (movimento em 'L'):\n");

    int movimentos = 2;
    int passo_max = 3;

    for (int m = 1; m <= movimentos; m++) {
        int passo = 1;
        int casas_cima = 0;
        int direcao_realizada = 0;

        while (passo <= passo_max) {
            if (passo <= 2) {
                casas_cima++;
                printf("Movimento %d - Passo %d: Cima\n", m, passo);
            } else {
                if (direcao_realizada == 0) {
                    printf("Movimento %d - Passo %d: Direita\n", m, passo);
                    direcao_realizada = 1;
                } else {
                    // Redundância de segurança: não repetir a direção final
                    break;
                }
            }

            passo++;
        }
    }
}

int main() {
    // ----------- Variáveis de movimento -----------
    int casas_bispo = 5;
    int casas_torre = 5;
    int casas_rainha = 8;

    // ----------- BISPO: Recursivo + loop aninhado (linha e coluna) -----------
    printf("\nMovimentacao do Bispo (diagonal superior direita):\n");
    // Usamos recursão pura para simular diagonais (linha + coluna)
    moverBispoDiagonal(1, 1, casas_bispo, casas_bispo);

    // ----------- TORRE: Recursiva -----------
    printf("\nMovimentacao da Torre (direita):\n");
    moverTorre(1, casas_torre);

    // ----------- RAINHA: Recursiva -----------
    printf("\nMovimentacao da Rainha (esquerda):\n");
    moverRainha(1, casas_rainha);

    // ----------- CAVALO: loops aninhados com múltiplas variáveis/condições -----------
    moverCavalo();

    return 0;
}
