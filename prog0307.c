#include <stdio.h>

#include <stdio.h>

int main()
{
    float salario, taxa;
    printf("Quao o salário: ");
    scanf("%f", &salario);
    if (salario < 1000)
    {
        taxa = .05;
    }
    else
    {

        if (salario < 5000)
        {
            taxa = .11;
        }
        else
        {
            taxa = .35;
        }
    }
    printf("Salário: %.2f Imposto: %.2f Líquido: %.2f\n", salario, salario * taxa, salario * (1.0 - taxa));
}

/*int main()
{
    float salario_bruto, salario_liquido, imposto;
    printf("Digite o valor do salário bruto: R$ \n");
    scanf("%f", &salario_bruto);

    if (salario_bruto < 1)
    {
        printf("Erro: Salário inválido! Deve ser maior ou igual a R$ 1.00\n");
        return 1;
    }
    if (salario_bruto < 1000)
    {
        imposto = salario_bruto * 0.05;
        salario_liquido = salario_bruto - imposto;
        printf("O salário bruto: R$ %0.2f, paga de imposto %.2f e o valor líquido é %.2f\n", salario_bruto, imposto, salario_liquido);
    }
    if (salario_bruto >= 1000 == salario_bruto < 5000)
    {
        imposto = salario_bruto * 0.11;
        salario_liquido = salario_bruto - imposto;
        printf("O salário bruto: R$ %0.2f, paga de imposto %.2f e o valor líquido é %.2f\n", salario_bruto, imposto, salario_liquido);
    }
    if (salario_bruto >= 5000)
    {
        imposto = salario_bruto * 0.35;
        salario_liquido = salario_bruto - imposto;
        printf("O salário bruto: R$ %0.2f, paga de imposto %.2f e o valor líquido é %.2f\n", salario_bruto, imposto, salario_liquido);
    }
}
*/