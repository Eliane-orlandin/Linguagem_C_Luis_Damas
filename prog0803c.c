#include <stdio.h>

int main()
{
    char str[] = "Olá, mundo!";
    char *p;

    // Inicializando o ponteiro com o endereço do primeiro caractere da string
    p = str;

    printf("String completa: %s\n", str);
    printf("Caracteres individualmente:\n");

    // Percorrendo a string com o ponteiro
    while (*p != '\0')
    {
        printf("%c ", *p);
        p++; // Avança para o próximo caractere
    }

    printf("\n");
    return 0;
}