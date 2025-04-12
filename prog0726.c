#include <stdio.h>
#include <string.h>

// Função que altera os caracteres da string s entre as posições i e j para ch
void strijset(char *s, int i, int j, char ch) {
    int len = strlen(s);

    // Limita j ao tamanho da string - 1, para evitar ultrapassar o final
    if (j >= len) {
        j = len - 1;
    }

    // Preenche com o caractere ch da posição i até j
    for (int k = i; k <= j; k++) {
        if (k >= 0 && k < len) {
            s[k] = ch;
        }
    }
}

int main() {
    char str1[] = "Anabela";

    strijset(str1, 0, 2, '*');  // "Anabela" -> "***bela"
    printf("%s\n", str1);

    char str2[] = "Anabela";
    strijset(str2, 3, 4, '#');  // "Ana##la"
    printf("%s\n", str2);

    char str3[] = "Anabela";
    strijset(str3, 5, 20, '|');  // "Anabe||"
    printf("%s\n", str3);

    return 0;
}
