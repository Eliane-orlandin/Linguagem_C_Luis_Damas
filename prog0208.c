#include <stdio.h>

int main()
{
    float quilos = 1.0E3;
    double gramas = 1.0E6;
    float n_toneladas;

    printf("Quantas toneladas comprou: ");
    scanf("%f", &n_toneladas);
    printf("N° de quilos = %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
    printf("N° de gramas = %f = %e\n", n_toneladas * gramas, n_toneladas * gramas);
}