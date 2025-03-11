#include <stdio.h>

int main()
{

    float sal[13];
    float total = 0.0;
    int i;

    for (i = 1; i <= 12; i++)
    {
        printf("Digite o salário do mês %d: R$ ", i);
        scanf("%f", &sal[i]);
    }

    printf("\n+------------+-------------+\n");
    printf("|    Mês     |   Salário   |\n");
    printf("+------------+-------------+\n");

    for (i = 1; i <= 12; i++)
    {
        printf("|    %3d     | %9.2f   |\n", i, sal[i]);
        total += sal[i];
    }
    printf("+------------+-------------+\n");
    printf("|Total Anual | %9.2f   |\n", total);
    printf("+------------+-------------+\n");

    return 0;
}