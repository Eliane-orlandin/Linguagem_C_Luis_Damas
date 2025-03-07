#include <stdio.h>

int eh_minuscula(char c)
{
    return (c >= 'a' && c <= 'z');
}

int main()
{
    char caractere;

    printf("Digite um caractere: \n");
    scanf(" %c", &caractere);

    if (eh_minuscula(caractere))
    {
        printf("'%c' é uma letra minúscula.\n", caractere);
    }
    else
    {
        printf("'%c' não é uma letra minúscula.\n", caractere);
    }

    return 0;
}

/* Opção mais simples usando a biblioteca built-in. */
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char caractere;

    printf("Digite um caractere:\n");
    scanf(" %c", &caractere);

    if (islower(caractere))
    {
        printf("'%c' é uma letra minúscula.\n", caractere);
    }
    else
    {
        printf("'%c' não é uma letra minúscula.\n", caractere);
    }

    return 0;
}
*/