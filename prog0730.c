#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *lower_upper(char *s) {
    static char resultado[100];  // Armazena o resultado final
    int esquerda = 0;            // Índice de preenchimento do lado esquerdo (minúsculas)
    int direita = strlen(s) - 1; // Índice de preenchimento do lado direito (maiúsculas)

    for (int i = 0; s[i] != '\0'; i++) {
        if (islower(s[i])) {
            resultado[esquerda++] = s[i];  // Vai preenchendo da esquerda para a direita
        } else if (isupper(s[i])) {
            resultado[direita--] = s[i];   // Vai preenchendo da direita para a esquerda
        }
    }

    resultado[esquerda + (strlen(s) - direita - 1)] = '\0';  // Finaliza a string

    return resultado;
}

int main() {
    char texto[] = "EraUmaVezUMCavalo";
    printf("%s\n", lower_upper(texto));  // Saída esperada: "ramaezavaloEUVUMC"
    return 0;
}
