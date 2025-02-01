#include <stdio.h>

int main()
{
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    if (x >= 0)
        printf("Número positivo\n");
    else
        printf("Número negativo\n");
}