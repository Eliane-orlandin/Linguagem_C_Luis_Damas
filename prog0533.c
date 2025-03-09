#include <stdio.h>

int eh_vogal(char ch)
{

    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if (eh_vogal(caractere))
    {
        printf("'%c' é uma vogal.\n", caractere);
    }
    else
    {
        printf("'%c' não é uma vogal.\n", caractere);
    }

    return 0;
}