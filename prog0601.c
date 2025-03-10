#include <stdio.h>

int main()
{
    float sal[12];
    float total = 0.0;
    int i;

    for (i = 0; i < 12; i++)
    {
        printf("Digite o salário do mês %d: ", i + 1);
        if (scanf("%f", &sal[i]) != 1)
        {
            printf("Erro na entrada de dados. Digite um número válido.\n");
            return 1;
        }

        while (getchar() != '\n')
            ;
    }

    // Exibição da tabela
    printf("\n+------------+-------------+\n");
    printf("|    Mês     |   Salário   |\n");
    printf("+------------+-------------+\n");

    for (i = 0; i < 12; i++)
    {
        printf("|     %-2d     |  %10.2f |\n", i + 1, sal[i]);
        total += sal[i]; // Acumulando total
    }

    printf("+------------+-------------+\n");
    printf("| Total Anual|  %10.2f |\n", total);
    printf("+------------+-------------+\n");

    return 0;
}
