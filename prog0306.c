#include <stdio.h>

int main()
{
    float salario, imposto;
    printf("Digite seu salário: R$: ");
    scanf("%f", &salario);

    if (salario < 1)
    {
        printf("Erro: Salário inválido! Deve ser maior ou igual a R$ 1.00\n");
        return 1;
    }

    if (salario > 1000)
    {
        imposto = salario * 0.10;
        printf("Você tem que pagar imposto de 10%%: R$ %.2f\n", imposto);
    }
    else
    {
        imposto = salario * 0.05;
        printf("Você tem que pagar imposto de 5%%: R$ %.2f\n", imposto);
    }
}