#include <stdio.h>

int main()
{
    int num = 1000;
    printf("Digite um caractere: ");
    scanf("%c", &num);
    printf("O valor de num = %d cujo caractere = '%c'\n", num, (char)num);
}