#include <stdio.h>

// Definição de constantes para os movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8
#define MOV_CAVALO 1  // O cavalo se move em L (2 casas numa direção, 1 em outra)

// Função recursiva para movimentação do Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função para movimentação do Cavalo usando loops aninhados
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int direcoes[8][2] = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},  // Movimentos verticais
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}   // Movimentos horizontais
    };

    for (int i = 0; i < 8; i++) {
        // Verifica se o movimento é válido antes de imprimir
        if (direcoes[i][0] == 0 || direcoes[i][1] == 0) continue;
        printf("L para (%d, %d)\n", direcoes[i][0], direcoes[i][1]);
    }
    printf("\n");
}

int main() {
    // Movimento da Torre (Recursão)
    printf("Movimento da Torre:\n");
    moverTorre(MOV_TORRE);
    printf("\n");

    // Movimento do Bispo (Recursão)
    printf("Movimento do Bispo:\n");
    moverBispo(MOV_BISPO);
    printf("\n");

    // Movimento da Rainha (Recursão)
    printf("Movimento da Rainha:\n");
    moverRainha(MOV_RAINHA);
    printf("\n");

    // Movimento do Cavalo (Loops Aninhados)
    moverCavalo();

    return 0;
}