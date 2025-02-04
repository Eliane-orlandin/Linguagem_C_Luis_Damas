#include <stdio.h>

int main()
{
    int num1, num2;
    num1 = 1;

    printf("Qual número você quer multiplicar: ");
    scanf(" %d", &num2);

    while (num1 <= 10)
    {
        printf("%d * %2d = %3d\n", num2, num1, num1 * num2);
        num1 = num1 + 1;
    }
}