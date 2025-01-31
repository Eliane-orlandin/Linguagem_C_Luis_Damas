#include <stdio.h>

int main()
{
    int dia, mes, ano;
    printf("Ano: ");
    scanf("%d", &ano);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Data completa: %d/%d/%d\n", dia, mes, ano);
}