#include <stdio.h>

int Impar(int x)
{
    return x % 2 != 0;
}

int main()
{
    int num;

    printf("Digite um número pra saber se é par ou ímpar: \n");
    scanf("%d", &num);

    if (Impar(num))
    {
        printf("%d é ímpar. \n", num);
    }
    else
    {
        printf("%d é par. \n", num);
    }

    return 0;
}