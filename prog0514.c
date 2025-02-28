#include <stdio.h>
#include <math.h>

float VAL(float x, int n, float t)
{
    return x / pow(1 + t, n);
}

int main()
{
    float x = 1000.0;
    int n = 5;
    float t = 0.10;

    printf("O Valor Atual Líquido é: %.2f\n", VAL(x, n, t));

    return 0;
}

/*
**Função VAL(float x, int n, float t):
Usa a fórmula VAL = x / pow(1 + t, n), onde pow(base, expoente) é usada para calcular a potência.
**Função main():
Define um exemplo com x = 1000.0, n = 5 anos e taxa t = 0.10 (10%).
Chama VAL(x, n, t) e imprime o resultado formatado com duas casas decimais.
*/