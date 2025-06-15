#include <stdio.h>

int main()
{
    char origem[] = "Exemplo de string";
    char destino[50];         // Certifique-se de que o destino tem espaço suficiente
    char *pOrigem = origem;   // Ponteiro para a string de origem
    char *pDestino = destino; // Ponteiro para a string de destino

    // Copiando a string de origem para destino
    while (*pOrigem != '\0')
    {
        *pDestino = *pOrigem; // Copia o caractere atual
        pOrigem++;            // Avança para o próximo caractere na origem
        pDestino++;           // Avança para o próximo caractere no destino
    }
    *pDestino = '\0'; // Adiciona o caractere nulo no final da string de destino

    // Exibindo as strings
    printf("String de origem: %s\n", origem);
    printf("String copiada: %s\n", destino);

    return 0;
}