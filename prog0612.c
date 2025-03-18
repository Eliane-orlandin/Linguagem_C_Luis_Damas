#include <stdio.h>

#define MAX 3

void transpor(int v[MAX][MAX]);

void transpor(int v[MAX][MAX])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
}

void printMatriz(int v[MAX][MAX])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Matriz original:\n");
    printMatriz(matriz);

    transpor(matriz);

    printf("\nMatriz transposta:\n");
    printMatriz(matriz);

    return 0;
}
