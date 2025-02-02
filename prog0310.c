#include <stdio.h>

int main()
{
    float salario;

    printf("Qual o salário: \n");
    scanf("%f", &salario);

    if (salario > 1000)
    {
        salario = salario * 1.05;
    }
    else
    {
        salario = salario * 1.07;
    }
    printf("Novo salário: %.2f\n", salario);
}