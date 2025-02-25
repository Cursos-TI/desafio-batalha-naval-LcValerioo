#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[10] = {1,2,3,4,5,6,7,8,9,10}, tabuleiro[10][10] = {}, i, j, x, y;
    
    printf("---TABULEIRO DO JOGO---\n");
    
    printf("  ");
    
    for( i = 0; i < 10; i++)
    {
       printf("%2c ", linha[i]);
    }
    //printf("\n");
    for( i = 0; i < 10; i++)
    {
        printf("\n%2d", coluna[i]);
        for(j = 0; j < 10; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
    }

    printf("\n\n---FIM DO PROGRAMA---\n\n");

    return 0;
}