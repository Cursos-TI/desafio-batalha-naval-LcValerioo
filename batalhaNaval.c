#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
//Criação das constantes de tamanho da matriz
#define LINHA 10
#define COLUNA 10

int main() {
    // Declarando as variáveis
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[10] = {1,2,3,4,5,6,7,8,9,10}, tabuleiro[10][10] = {0};
    int i, j;

    printf("---TABULEIRO DO JOGO---\n");
    printf("  ");

    // Impressão da linha com letras (A-J)
    for (i = 0; i < LINHA; i++) {
        printf("%2c ", linha[i]);
    }
    printf("\n");  // Corrigido para quebrar a linha corretamente

    // Posicionando o navio 1 (horizontal)
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    // Posicionando o navio 2 (vertical)
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
    
    // Posicionando o navio 3 (Diagonal)
    tabuleiro[3][0] = 3;
    tabuleiro[2][1] = 3;
    tabuleiro[1][2] = 3;
    
    // Posicionando o navio 4 (Diagonal)
    tabuleiro[9][3] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[7][1] = 3;

    // Impressão do tabuleiro
    for (i = 0; i < LINHA; i++) {
        // Impressão da coluna numerada
        printf("%2d", coluna[i]);

        for (j = 0; j < COLUNA; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");  // Para formatar corretamente o tabuleiro
    }

    printf("\n\n---FIM DO PROGRAMA---\n\n");

    return 0;
}