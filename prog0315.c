#include <stdio.h>

int main()
{
    float salario, imposto = 0.0;
    char sexo;

    printf("Qual o valor do seu salário: R$ \n");
    scanf("%f", &salario);
    printf("Qual o seu sexo: (F) ou (M): \n");
    scanf(" %c", &sexo);

    switch (sexo)
    {
    case 'M':
    case 'm':
        imposto = 0.15;
        break;
    case 'F':
    case 'f':
        imposto = 0.10;
    }
    printf("Imposto %.2f\n", salario * imposto);
}