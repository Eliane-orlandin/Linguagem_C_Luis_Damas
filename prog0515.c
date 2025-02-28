#include <stdio.h>

int main()
{
    long n_segundos;
    int n_horas;

    printf("Digite um número em horas que você deseja transformar em segundos: ");
    scanf("%d", &n_horas);
    n_segundos = n_horas * 3600;
    if (n_segundos <= 3600)
    {
        printf("%d hora = %li segundos\n", n_horas, n_segundos);
    }
    else
    {
        printf("%d horas = %li segundos\n", n_horas, n_segundos);
    }

    return 0;
}