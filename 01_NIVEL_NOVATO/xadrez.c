#include <stdio.h>

// Desafio de Xadrez - MateCheck (Nível Novato)
// Este programa simula a movimentação de peças de xadrez (Bispo, Torre e Rainha)
// utilizando estruturas de repetição (for, while, do-while) para exibir as direções e o número de casas percorridas.

int main() {
    // Variáveis para armazenar o número de casas que cada peça pode se mover
    int casas_bispo = 5;   // Bispo: 5 casas na diagonal superior direita
    int casas_torre = 5;   // Torre: 5 casas para a direita
    int casas_rainha = 8;  // Rainha: 8 casas para a esquerda

    // Movimentação do Bispo (diagonal superior direita) usando for
    printf("\nMovimentacao do Bispo (diagonal superior direita):\n");
    int i = 1;  // Contador para as casas
    for (i = 1; i <= casas_bispo; i++) {
        printf("Casa %d: Cima + Direita\n", i);
    }

    // Movimentação da Torre (direita) usando while
    printf("\nMovimentacao da Torre (direita):\n");
    i = 1;  // Reinicia o contador
    while (i <= casas_torre) {
        printf("Casa %d: Direita\n", i);
        i++;  // Incrementa o contador
    }

    // Movimentação da Rainha (esquerda) usando do-while
    printf("\nMovimentacao da Rainha (esquerda):\n");
    i = 1;  // Reinicia o contador
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;  // Incrementa o contador
    } while (i <= casas_rainha);

    return 0;
}