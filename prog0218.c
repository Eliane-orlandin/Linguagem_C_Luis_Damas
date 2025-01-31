#include <stdio.h>

int main()
{
    long int n_segundos;
    printf("Digite o n° de segundos: ");
    scanf("%ld", &n_segundos);
    printf("Horas    : %d\n", (int)n_segundos / 3600);
    printf("Minutos  : %d\n", (int)(n_segundos % 3600 / 60));
    printf("Segundos : %d\n", (int)n_segundos % 60);
}