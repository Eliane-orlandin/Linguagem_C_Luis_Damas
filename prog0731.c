#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* All_Big(char *s) {
    static char resultado[100]; // Array para guardar os caracteres maiúsculos
    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            resultado[j++] = s[i]; // Copia apenas os caracteres maiúsculos
        }
    }

    resultado[j] = '\0'; // Finaliza a nova string
    return resultado;
}
int main() {
    char texto[] = "Era Uma Vez EM UM Castelo";
    printf("%s\n", All_Big(texto));  // Saída: "EUEMUC"
    return 0;
}
