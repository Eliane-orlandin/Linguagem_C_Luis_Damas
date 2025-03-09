#include <stdio.h>

int eh_especial(int x)
{
    return (2 * x == x);
}

int main()
{

    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    if (eh_especial(num))
    {
        printf("%d é especial.\n", num);
    }
    else
    {
        printf("%d não é especial.\n", num);
    }

    return 0;
}