#include <stdio.h>

// Desafio de Xadrez - MateCheck (Nível Aventureiro)
// Simula movimentos de Bispo, Torre, Rainha e Cavalo com estruturas de repetição (for, while, do-while)

int main() {
    // Variáveis para armazenar o número de casas que cada peça pode se mover
    int casas_bispo = 5;   // Bispo: 5 casas na diagonal superior direita
    int casas_torre = 5;   // Torre: 5 casas para a direita
    int casas_rainha = 8;  // Rainha: 8 casas para a esquerda

    // Movimentação do Bispo (diagonal superior direita) usando for
    printf("\nMovimentacao do Bispo (diagonal superior direita):\n");
    for (int i = 1; i <= casas_bispo; i++) {
        printf("Casa %d: Cima + Direita\n", i);
    }

    // Movimentaçao da Torre (direita) usando while
    printf("\nMovimentacao da Torre (direita):\n");
    int i = 1;
    while (i <= casas_torre) {
        printf("Casa %d: Direita\n", i);
        i++;
    }

    // Movimentaçao da Rainha (esquerda) usando do-while
    printf("\nMovimentacao da Rainha (esquerda):\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= casas_rainha);

    // Movimentaçao do Cavalo (duas casas para baixo e uma para a esquerda)
    // Usando loops aninhados: for (externo) + while (interno)
    printf("\nMovimentacao do Cavalo (movimento em 'L'):\n");

    int movimentos = 2; // Vamos simular 2 movimentos em 'L'
    for (int j = 1; j <= movimentos; j++) {
        int passo = 1;

        // Duas casas para baixo
        while (passo <= 2) {
            printf("Movimento %d - Passo %d: Baixo\n", j, passo);
            passo++;
        }

        // Uma casa para a esquerda
        printf("Movimento %d - Passo %d: Esquerda\n", j, passo);
    }

    return 0;
}
