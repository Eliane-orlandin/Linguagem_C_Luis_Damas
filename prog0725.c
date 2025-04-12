#include <stdio.h>
#include <string.h>

void allspaces(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = ' ';
    }
}

int main() {
    char mystring[] = "Alfa";
    allspaces(mystring);
    printf("Resultado: '%s'\n", mystring);  // Saída será espaços
    return 0;
}
