#include <stdio.h>
#include <string.h>

char n_esimo (const char *s, int n) {
    if (n > 0 && n <= strlen(s)) {
        return s[n -1];
    } else {
        return '\0';
    }
}

int main() {
    const char *str = "Era Uma Vez";
    int posicao = 1;
    char caracter = n_esimo(str, posicao);

    if (caracter != '\0') {
        printf("O %dº caractere de \"%s\" é '%c'\n", posicao, str, caracter);
    } else {
        printf("Posição inválida.\n");
    }
    return 0;
}