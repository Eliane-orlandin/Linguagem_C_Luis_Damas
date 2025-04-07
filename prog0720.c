#include <stdio.h>
#include <string.h>

void Entremeado(const char *s, int n, char *resultado) {
    int i = 0, j = 0;
    int len = strlen(s);

    if (n == 0) {
        strcpy(resultado, s);  // Retorna a string inteira
        return;
    }

    while (i < len) {
        resultado[j++] = s[i];
        i += (n + 1);  // Pula de n+1 em n+1
    }
    resultado[j] = '\0';  // Finaliza a string
}

int main() {
    char str[] = "ABCDEFGHIJLMN";
    char resultado[100];

    Entremeado(str, 0, resultado);
    printf("Entremeado(str, 0) → \"%s\"\n", resultado);

    Entremeado(str, 1, resultado);
    printf("Entremeado(str, 1) → \"%s\"\n", resultado);

    Entremeado(str, 3, resultado);
    printf("Entremeado(str, 3) → \"%s\"\n", resultado);

    return 0;
}
