#include <stdio.h>

int Entre(int x, int lim_inf, int lim_sup)
{
    return (x >= lim_inf && x <= lim_sup);
}

int main()
{
    int numero, limite_inferior, limite_superior;

    printf("Digite um número: \n");
    scanf("%d", &numero);

    printf("Digite o limite inferior: \n");
    scanf("%d", &limite_inferior);

    printf("Digite o limite superior: \n");
    scanf("%d", &limite_superior);

    if (Entre(numero, limite_inferior, limite_superior))
    {
        printf("%d está dentro do intervalo [%d, %d]\n", numero, limite_inferior, limite_superior);
    }
    else
    {
        printf("%d está fora do intervalo [%d, %d]\n", numero, limite_inferior, limite_superior);
    }

    return 0;
}