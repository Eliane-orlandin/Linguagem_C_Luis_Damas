#include <stdio.h>

int main()
{
    int num1 = 15, num2 = 25, soma;
    int *p1, *p2, *pSoma;

    // Inicializando os ponteiros
    p1 = &num1;
    p2 = &num2;
    pSoma = &soma;

    // Calculando a soma usando os ponteiros
    *pSoma = *p1 + *p2;

    // Exibindo os valores e o resultado
    printf("Num1 = %d, Num2 = %d\n", *p1, *p2);
    printf("Soma = %d\n", *pSoma);

    return 0;
}