#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM])
{
    int i, j;
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            s[i][j] = ESPACO;
        }
    }
}

void mostra(char s[DIM][DIM])
{
    int i, j;
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            printf("%c", s[i][j]);
            if (j < DIM - 1)
                printf(" | ");
        }
        printf("\n");
        if (i < DIM - 1)
            printf("---------\n");
    }
}

int main()
{
    char Velha[DIM][DIM];
    int posx, posy;
    char ch = '0';
    int n_jogadas = 0;

    inic(Velha);
    while (1)
    {
        mostra(Velha);
        printf("Digite a posicao (linha e coluna) para jogar: ");
        scanf("%d %d", &posx, &posy);
        posx--;
        posy--;
        if (Velha[posx][posy] == ESPACO)
        {
            Velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
            n_jogadas++;
        }
        else
        {
            printf("Posicao ja ocupada\nJogue novamente\n");
        }
        if (n_jogadas == DIM * DIM)
        {
            printf("Fim de jogo\n");
            break;
        }
    }
    mostra(Velha);
}