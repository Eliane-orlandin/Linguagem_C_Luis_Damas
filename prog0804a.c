#include <stdio.h>

int main()
{
    char str[] = "Exemplo de string";
    char *p = str; // Ponteiro para o início da string
    int contador = 0;

    // Percorrendo a string com o ponteiro
    while (*p != '\0')
    {
        contador++; // Incrementa o contador para cada caractere
        p++;        // Avança para o próximo caractere
    }

    // Exibindo a string e o número de caracteres
    printf("String: %s\n", str);
    printf("Número de caracteres: %d\n", contador);

    return 0;
}