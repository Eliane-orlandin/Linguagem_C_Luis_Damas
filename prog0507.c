#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int dobro(int x)
{
    return 2 * x;
}

int main()
{

    int n, i, total;
    printf("Digite dois números: \n");
    scanf("%d%d", &n, &i);
    total = soma(n, i);
    printf("%d + %d = %d\n", n, i, total);
    printf("2 * %d = %d e 2 * %d = %d\n", n, dobro(n), i, dobro(i));

    return 0;
}