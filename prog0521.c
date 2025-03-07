#include <stdio.h>

int eh_alfanumerico(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int main()
{

    char caractere;

    printf("Digite um caractere: \n");
    scanf(" %c", &caractere);

    if (eh_alfanumerico(caractere))
    {
        printf("'%c' é uma letra.\n", caractere);
    }
    else
    {
        printf("'%c' não é uma letra.\n", caractere);
    }

    return 0;
}

/*Outra forma mais simples, usando a biblioteca <ctype.h>*/
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (isalpha(caractere))
    {
        printf("'%c' é uma letra.\n", caractere);
    }
    else
    {
        printf("'%c' não é uma letra.\n", caractere);
    }

    return 0;
}
*/