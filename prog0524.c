#include <stdio.h>

int eh_maiuscula(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int main()
{
    char caractere;

    printf("Digite um caractere: \n");
    scanf(" %c", &caractere);

    if (eh_maiuscula(caractere))
    {
        printf("'%c' é uma letra maiúscula.\n", caractere);
    }
    else
    {
        printf("'%c' não é uma letra maiúscula.\n", caractere);
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

    if (isupper(caractere))
    {
        printf("'%c' é uma letra maiúscula.\n", caractere);
    }
    else
    {
        printf("'%c' não é uma letra maiúscula.\n", caractere);
    }

    return 0;
}
*/