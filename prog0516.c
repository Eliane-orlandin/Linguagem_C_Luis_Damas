#include <stdio.h>

int main()
{
    int num, result;
    char tipo;

    printf("Digite um número em horas: ");
    scanf("%d", &num);
    printf("Unidade de tempo: \n"
           "'h' para horas\n"
           "'m' para minutos\n"
           "'s' para segundos\n"
           "Digite qual unidade: ");
    scanf(" %c", &tipo);

    if (tipo == 'h' || tipo == 'H')
    {
        result = num;
        printf("A conversão do número %d em %c = %d horas\n", num, tipo, result);
    }
    else if (tipo == 'm' || tipo == 'M')
    {
        result = num * 60;
        printf("A conversão do número %d em %c = %d minutos\n", num, tipo, result);
    }
    else if (tipo == 's' || tipo == 'S')
    {
        result = num * 3600;
        printf("A conversão do número %d em %c = %d segundos\n", num, tipo, result);
    }
    else
    {
        printf("Opção inválida!\n");
    }

    return 0;
}