#include <stdio.h>

int main()
{
    char Nome[50], Sobrenome[50];
    printf("Digite o nome: ");
    scanf("%s", Nome);
    printf("Digite o sobrenome: ");
    scanf("%s", Sobrenome);
    printf("Nome completo: %s %s\n", Nome, Sobrenome);
}