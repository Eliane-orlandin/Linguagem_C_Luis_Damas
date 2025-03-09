#include <stdio.h>

char para_maiuscula(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

int main()
{
    char caractere;

    printf("Digite um caractere:\n");
    caractere = getchar();

    printf("Maiúscula: %c\n", para_maiuscula(caractere));

    return 0;
}

/*Opção usando a biblioteca built-in <ctype.h>*/
/*
#include <stdio.h>
#include <ctype.h>

int main()
{

    char caractere;

    printf("Digite um caractere:\n");
    caractere = getchar();

    printf("Minúscula: %c\n", toupper(caractere));

    return 0;
}
*/