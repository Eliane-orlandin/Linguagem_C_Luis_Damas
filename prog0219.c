#include <stdio.h>

int main()
{
    float x;
    printf("Digite um número real: ");
    scanf("%f", &x);
    printf("Parte inteira   : %d\n", (int)x);
    printf("Parte fracionada: %f\n", x - ((int)x));
}