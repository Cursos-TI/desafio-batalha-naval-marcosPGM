#include <stdio.h>

int main() {
    int TAM = 10;   // tamanho do tabuleiro
    int NAVIO = 3;  // navios

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char tabuleiro[10][10];
    int i, j;

    // transforma 0 em água 
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // Coloca um navio horizontal
    for (j = 4; j < 4 + NAVIO; j++) {
        tabuleiro[2][j] = '3';
    }

    // Coloca um navio vertical
    for (i = 6; i < 6 + NAVIO; i++) {
        tabuleiro[i][7] = '3';
    }

    // Imprime o tabuleiro com números nas colunas
    printf("   ");
    for (j = 1; j <= TAM; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (i = 0; i < TAM; i++) {
        printf("%c  ", linha[i]); // imprime a letra da linha
        for (j = 0; j < TAM; j++) {
            printf("%c  ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
