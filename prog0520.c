#include <stdio.h>

int eh_digito(char c)
{
    return (c >= '0' && c <= '9');
}

int main()
{
    char caractere;

    printf("Digite um caractere:\n");
    scanf("%c", &caractere);

    if (eh_digito(caractere))
    {
        printf("'%c' é um digito.\n", caractere);
    }
    else
    {
        printf("'%c' não é um dígito.\n", caractere);
    }

    return 0;
}

/*
Outra opção é usar a biblioteca <ctype.h> O código fica mais simples é só incluir a biblioteca.
*/

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (isdigit(caractere))
    {
        printf("'%c' é um dígito.\n", caractere);
    }
    else
    {
        printf("'%c' não é um dígito.\n", caractere);
    }

    return 0;
}
*/