#include <stdio.h>

int eh_espaco(char c)
{
    return (c == ' ' || c == '\t');
}

int main()
{
    char caractere;

    printf("Digite um caractere:\n");
    caractere = getchar();

    if (eh_espaco(caractere))
    {
        printf("O caractere digitado é um espaço ou TAB.\n");
    }
    else
    {
        printf("'%c' não é um espaço ou TAB.\n", caractere);
    }

    return 0;
}

/*#include <stdio.h>
#include <ctype.h> // Para usar a função isspace

int main()
{
    char caractere;

    printf("Digite um caractere:\n");

    caractere = getchar();

    if (isspace(caractere))
    {
        printf("O caractere digitado é um espaço ou TAB.\n");
    }
    else
    {
        printf("'%c' não é um espaço ou TAB.\n", caractere);
    }

    return 0;
}

*/