#include <stdio.h>
#include <ctype.h>

char *wordupr(char *s) {
    int i = 0;
    int nova_palavra = 1;

    while (s[i] != '\0') {
        if (s[i] == ' ') {
            nova_palavra = 1;
        } else {
            if (nova_palavra) {
                s[i] = toupper(s[i]);  // primeira letra da palavra
                nova_palavra = 0;
            } else {
                s[i] = tolower(s[i]);  // letras restantes
            }
        }
        i++;
    }
    return s;
}

int main() {
    char texto[] = "ERA uma VeZ";
    printf("%s\n", wordupr(texto));  // Saída: "Era Uma Vez"
    return 0;
}
