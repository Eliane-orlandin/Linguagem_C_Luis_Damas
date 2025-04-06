#include <stdio.h>

void strpack(char *s) {
    if (s == NULL || *s == '\0') {
        return;
    }

    char *dest = s; // Ponteiro para a posição de escrita
    char *src = s;  // Ponteiro para a posição de leitura

    while (*src != '\0') {
        *dest = *src;
        // Avança src enquanto o próximo caractere for igual ao atual
        while (*src == *dest) {
            src++;
        }
        dest++;
    }
    *dest = '\0'; // Finaliza a string compactada
}

int main() {
    char str1[] = "Arrecadddaccao";
    strpack(str1);
    printf("strpack(\"Arrecadddaccao\") -> \"%s\"\n", str1);

    char str2[] = "          AAAaaaBBB CCCIALFFA";
    strpack(str2);
    printf("strpack(\"          AAAaaaBBB CCCIALFFA\") -> \"%s\"\n", str2);

    return 0;
}
