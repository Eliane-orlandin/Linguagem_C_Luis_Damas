#include <stdio.h>

float max(float v[], int n);

float max(float v[], int n)
{
    if (n <= 0)
    {
        return -1; // Retorna -1 se n for inválido
    }

    float max_value = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > max_value)
        {
            max_value = v[i];
        }
    }
    return max_value;
}

int main()
{
    float vetor[] = {1.2, 3.4, 5.6, 7.8, 2.3, 4.5};
    int n = 4; // Número de elementos a considerar

    float resultado = max(vetor, n);
    printf("O maior valor entre os %d primeiros elementos é: %.2f\n", n, resultado);

    return 0;
}