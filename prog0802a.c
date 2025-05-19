#include <stdio.h>

int main()
{
    char str[100];
    char *ptr = str;

    // Lê uma string do usuário
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha
    char *newline = str;
    while (*newline != '\0')
    {
        if (*newline == '\n')
        {
            *newline = '\0';
            break;
        }
        newline++;
    }

    // Verifica se a string está vazia
    if (*ptr == '\0')
    {
        printf("String vazia!\n");
        return 0;
    }

    // Imprime a string na ordem normal
    printf("Ordem normal: ");
    while (*ptr != '\0')
        putchar(*ptr++);
    printf("\n");

    // Imprime a string na ordem inversa
    printf("Ordem inversa: ");
    ptr--; // Volta para o último caractere
    while (ptr >= str)
        putchar(*ptr--);
    printf("\n");

    return 0;
}