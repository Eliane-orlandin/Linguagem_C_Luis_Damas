#include <stdio.h>

int main()
{
    float salario;
    printf("Qual o valor do salário: R$ ");
    scanf("%f", &salario);
    if (salario < 100000)
    {
        salario = salario + 1000;
        printf("Você teve aumento de salário 🎉!! Agora seu salário é R$ %.2f\n", salario);
    }
    else
    {
        printf("Você não teve aumento de salário 😭 ");
    }
}