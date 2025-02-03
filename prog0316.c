#include <stdio.h>

int main()
{
    int num1, num2, resultado;
    char operador;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    printf("Digite a operação que deseja fazer (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '\\':
    case ':':
    case '/':
        resultado = num1 / num2;
        break;
    case 'x':
    case 'X':
    case '*':
        resultado = num1 * num2;
        break;

    default:
        printf("Expressão errada\n");
        break;
    }
    printf("%d %c %d = %d\n", num1, operador, num2, resultado);
}