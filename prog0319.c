#include <stdio.h>

int main()
{
    int n_horas;
    long resultado;
    char tipo;

    printf("Número de horas que quer converter: \n");
    scanf("%d", &n_horas);
    printf("Em qual tipo: (M = mês, S = semana ou D = dia): \n");
    scanf(" %c", &tipo);

    switch (tipo)
    {
    case 'M':
    case 'm':
        resultado = n_horas * 60L;
        break;
    case 'S':
    case 's':
        resultado = n_horas * 3600L;
        break;
    case 'D':
    case 'd':
        resultado = n_horas * 36000L;
        break;

    default:
        printf("Dados incorretos!\n");
        break;
    }
    printf("O número de horas: %dh representa %ld %c\n", n_horas, resultado, tipo);
}