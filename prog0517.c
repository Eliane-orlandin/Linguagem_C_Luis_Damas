
#include <stdio.h>

float Max(float x, float y, float w)
{
    float max = x; // Inicializa o maior valor como x
    if (y > max)
    {
        max = y; // Atualiza para y, se for maior
    }
    if (w > max)
    {
        max = w; // Atualiza para w, se for maior
    }
    return max;
}

int main()
{
    float x, y, w;
    printf("Digite os valores de x, y e w: \n");
    scanf("%f %f %f", &x, &y, &w);

    float maior = Max(x, y, w);
    printf("O maior valor é: %.2f\n", maior);

    return 0;
}
