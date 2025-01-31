#include <stdio.h>

int main()
{
    int num;
    printf("Digite um inteiro: ");
    scanf("%d", &num);
    printf("Foi digitado %d cujo caractere = '%c'\n", num, (char)num);
    printf("O caractere seguinte = '%c' tem o ASCII n° %d\n", (char)(num + 1), num + 1);
}