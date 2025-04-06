#include <stdio.h>
#include <string.h>

void repeticoes(const char *s, char *resultado) {
    int frequencia[256] = {0};
    int i, j = 0;

    // Contar a frequência de cada caractere
    for (i = 0; s[i] != '\0'; i++) {
        frequencia[(unsigned char)s[i]]++;
    }

    // Construir a string resultado com caracteres que aparecem mais de uma vez
    for (i = 0; s[i] != '\0'; i++) {
        if (frequencia[(unsigned char)s[i]] > 1) {
            resultado[j++] = s[i];
        }
    }

    resultado[j] = '\0'; // Finalizar a string resultado
}

int main() {
    const char *entrada1 = "ALFACE";
    char resultado1[100];

    repeticoes(entrada1, resultado1);
    printf("repeticoes(\"%s\") --> \"%s\"\n", entrada1, resultado1);

    const char *entrada2 = "ALTA FIDELIDADE";
    char resultado2[100];

    repeticoes(entrada2, resultado2);
    printf("repeticoes(\"%s\") --> \"%s\"\n", entrada2, resultado2);

    return 0;
}
