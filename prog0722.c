#include <stdio.h>

char Max_Ascii(char *str) {
    if (str[0] == '\0') {
        return '\0'; // string vazia
    }

    char max = str[0];
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] > max) {
            max = str[i];
        }
    }
    return max;
}

int main() {
    char texto[] = "abcDEF123";
    char maior = Max_Ascii(texto);

    if (maior != '\0') {
        printf("Maior caractere ASCII: '%c' (código %d)\n", maior, maior);
    } else {
        printf("String vazia.\n");
    }

    return 0;
}
// O código acima define uma função Max_Ascii que recebe uma string e retorna o caractere com o maior valor ASCII.
// A função percorre a string, comparando cada caractere com o máximo encontrado até então.
// No main, a função é chamada com uma string de exemplo e o resultado é impresso.
// O código é simples e eficiente, utilizando um loop para encontrar o caractere máximo.
// A função lida corretamente com strings vazias, retornando '\0'.