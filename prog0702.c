#include <stdio.h>

int main()
{
    char Nome[50];
    printf("Digite seu nome completo: ");
    fgets(Nome, sizeof(Nome), stdin);
    printf("Nome completo: %s\n", Nome);
}