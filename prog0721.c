#include <stdio.h>
#include <string.h>

void xspace(char *s, char *resultado) {
    int i = 0, j = 0;

    while (s[i] != '\0') {
        resultado[j++] = s[i];
        if (s[i] != ' ') {
            resultado[j++] = ' ';
        }
        i++;
    }
    resultado[j] = '\0'; // Finaliza a nova string
}

int main() {
    char str[] = "Era_Uma_Vez";
    char resultado[100];

    xspace(str, resultado);
    printf("xspace(str) -> \"%s\"\n", resultado);

    return 0;
}
