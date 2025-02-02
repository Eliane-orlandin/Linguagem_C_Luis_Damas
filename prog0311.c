#include <stdio.h>

int main()
{
    char est_civil;
    puts("Qual o estado civil: ");
    est_civil = getchar();
    if (est_civil == 'S' || est_civil == 's')
    {
        printf("Solteiro\n");
    }
    else
    {
        if (est_civil == 'C' || est_civil == 'c')
        {
            printf("Casado\n");
        }
        else
        {
            if (est_civil == 'D' || est_civil == 'd')
            {
                printf("Divorciado\n");
            }
            else
            {
                if (est_civil == 'V' || est_civil == 'v')
                {
                    printf("Viúvo\n");
                }

                else
                {
                    printf("Estado civil inválido\n");
                }
            }
        }
    }
}