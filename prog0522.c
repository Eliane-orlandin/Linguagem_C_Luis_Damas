#include <stdio.h>

int eh_alfanumerico(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c >= '9'));
}

int main()
{
    char caractere;

    printf("Digite um caractere:\n");
    scanf(" %c", &caractere);

    if (eh_alfanumerico(caractere))
    {
        printf("'%c' é um caractere alfanumérico (letra ou número).\n", caractere);
    }
    else
    {
        printf("'%c' não é um caractere alfanumérico.\n", caractere);
    }
}

/* Opção mais simples*/
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (isalnum(caractere))
    {
        printf("'%c' é um caractere alfanumérico (letra ou número).\n", caractere);
    }
    else
    {
        printf("'%c' não é um caractere alfanumérico.\n", caractere);
    }

    return 0;
}
*/