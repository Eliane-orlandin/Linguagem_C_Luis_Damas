#include <stdio.h>

int cubo(int x)
{
    return x * x * x;
}

int main()
{

    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    printf("O cudo de %d é %d.\n", num, cubo(num));

    return 0;
}