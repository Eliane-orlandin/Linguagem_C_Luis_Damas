#include <stdio.h>

int main()
{
    char s[100];
    char *ptr = s;

    printf("Digite uma string: ");
    fgets(s, sizeof(s), stdin);

    // Remove o caractere de nova linha adicionado por fgets
    char *newline = s;
    while (*newline != '\0')
    {
        if (*newline == '\n')
        {
            *newline = '\0';
            break;
        }
        newline++;
    }

    if (*ptr == '\0')
        return 0;

    // Imprime a string na ordem normal
    while (*ptr != '\0')
        putchar(*ptr++);
    ptr--;

    // Imprime a string na ordem inversa
    while (ptr >= s)
        putchar(*ptr--);

    return 0;
}