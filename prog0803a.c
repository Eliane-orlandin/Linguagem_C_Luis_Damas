#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int *p1 = &a; // Ponteiro para a variável 'a'
    int *p2 = &b; // Ponteiro para a variável 'b'

    printf("Antes da troca:\n");
    printf("a = %d, b = %d\n", a, b);

    // Troca os valores de 'a' e 'b' usando ponteiros
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("Depois da troca:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}