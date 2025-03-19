#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void mostra(char Velha[DIM][DIM]);
int verifica_vencedor(char Velha[DIM][DIM]);

int main()
{
    char Velha[DIM][DIM] = {
        {ESPACO, ESPACO, ESPACO},
        {ESPACO, ESPACO, ESPACO},
        {ESPACO, ESPACO, ESPACO}};
    int posx, posy, n_jogadas = 0;
    char ch = '0';

    while (1)
    {
        mostra(Velha);
        printf("Digite a posição (linha e coluna) para jogar: ");
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
            printf("Posição já ocupada\nJogue novamente\n");
            continue;
        }

        if (verifica_vencedor(Velha))
        {
            mostra(Velha);
            printf("Jogador %c venceu!\n", ch);
            break;
        }

        if (n_jogadas == DIM * DIM)
        {
            printf("Fim de jogo!\n");
            break;
        }
    }
    mostra(Velha);
    return 0;
}

void mostra(char Velha[DIM][DIM])
{
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            printf("%c ", Velha[i][j]);
        }
        printf("\n");
    }
}

int verifica_vencedor(char Velha[DIM][DIM])
{
    for (int i = 0; i < DIM; i++)
    {
        if (Velha[i][0] != ESPACO && Velha[i][0] == Velha[i][1] == Velha[i][2])
        {
            return 1;
        }
    }

    for (int j = 0; j < DIM; j++)
    {
        if (Velha[0][j] != ESPACO && Velha[0][j] == Velha[1][j] && Velha[1][j] == Velha[2][j])
        {
            return 1;
        }
    }

    if (Velha[0][0] != ESPACO && Velha[0][0] == Velha[1][1] && Velha[1][1] == Velha[2][2])
    {
        return 1;
    }
    if (Velha[0][2] != ESPACO && Velha[0][2] == Velha[1][1] && Velha[1][1] == Velha[2][0])
    {
        return 1;
    }

    return 0;
}