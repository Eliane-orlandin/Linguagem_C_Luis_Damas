#include <stdio.h>

int main()
{
    float salario, imposto;
    char sexo;

    printf("Qual o valor do seu salário: R$ \n");
    scanf("%f", &salario);
    printf("Qual o seu sexo: (F) ou (M): \n");
    scanf(" %c", &sexo);

    switch (sexo)
    {
    case 'F':
    case 'f':
        imposto = salario * 0.10;
        printf("Você deve pagar R$ %.2f de imposto\n", imposto);
        break;
    case 'M':
    case 'm':
        imposto = salario * 0.15;
        printf("Você deve pagar R$ %.2f de imposto\n", imposto);
        break;

    default:
        printf("Sexo inválido! Use 'F' ou 'M'.\n");
    }
}