#include <stdio.h>

int main() {
    
    int tabuleiro[10][10];
    int navio[3] = {3, 3, 3};

    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    for (int i = 0, y = 2, x = 3; i <= 2; i++)
    {
        if (10 - x < 3)
        {
            printf("Navio fora dos limites do tabuleiro\n");
            break;
        } else {
            tabuleiro[y][x+i] += navio[i];
        }
        
    }

    for (int i = 0, y = 1, x = 6; i <= 2; i++)
    {
        if (10 - y < 3)
        {
            printf("Navio fora dos limites do tabuleiro\n");
            break;
        } if (tabuleiro[y+i][x] == 3)
        {
            printf("Espaço já ocupado\n");
            break;
        } else {
            tabuleiro[y+i][x] += navio[i];
        }
    }

    for (int i = 0, y = 5, x = 5; i <= 2; i++)
    {
        if (10 - y < 3)
        {
            printf("Navio fora dos limites do tabuleiro\n");
            break;
        } if (tabuleiro[y+i][x+i] == 3)
        {
            printf("Espaço já ocupado\n");
            break;
        } else {
            tabuleiro[y+i][x+i] += navio[i];
        }
    }

    for (int i = 0, y = 8, x = 2; i <= 2; i++)
    {
        if (10 - y > 3)
        {
            printf("Navio fora dos limites do tabuleiro\n");
            break;
        } if (tabuleiro[y+i][x+i] == 3)
        {
            printf("Espaço já ocupado\n");
            break;
        } else {
            tabuleiro[y-i][x+i] += navio[i];
        }
    }
    
    for (size_t i = 0; i <= 9; i++)
    {
        for (size_t j = 0; j <= 9; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
