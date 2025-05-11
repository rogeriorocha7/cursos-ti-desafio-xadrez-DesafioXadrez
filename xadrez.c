#include <stdio.h>
#include <stdlib.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Variaveis para armazenar o numero de casas que cada peça pode se mover
    int casas_bispo = 5; // Bispo: 5 casas na diagonal superior direita
    int casas_torre = 5; // Torre: 5 casas para a direita
    int casas_rainha = 8; // Rainha: 8 casas para a esquerda

    // Movimentaçao do Bispo
    printf("\nMovimentacao do Bispo (diagonal superior direita):\n");
    int i = 1; // Contador para as casas
    for (i = 1; i <= casas_bispo; i++){
        printf("Casa %d: Cima e Direita\n", i);
    }

    // Movimentaçao da Torre
    printf("\nMovimentaçao da Torre (direita):\n");
    i = 1; // Reinicia o contador
    while (i <= casas_torre){
        printf("Casa %d: Direita\n", i);
        i++;
    }

    // Movimentaçao da rainha
    printf("\nMovimentacao da Rainha (esquerda):\n");
    i = 1; // Reinicia o contador
    do{
        printf("Casa %d: Esquerda\n", i);
    } while (i <= casas_rainha);


    return 0;
}
