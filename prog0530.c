#include <stdio.h>

int para_negativo(int valor)
{
    /*if (valor > 0)
    {
        return -valor;
    }
    else
    {
        return valor;
    }*/
    // Pode se usar um operador ternário:
    return (valor > 0) ? -valor : valor;
}
int main()
{
    int num;

    printf("Digite um número:\n");
    scanf("%d", &num);

    printf("Resultado: %d\n", para_negativo(num));

    return 0;
}

/* Opção usando biblioteca built-in <stdlib.h>*/
/*
#include <stdio.h>
#include <stdlib.h>

int negative(int valor)
{
    return -abs(valor); // abs() retorna o valor absoluto, e o "-" garante que seja negativo
}

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Resultado: %d\n", negative(num));

    return 0;
}
*/