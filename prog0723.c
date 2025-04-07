#include <stdio.h>

void Prox_Char(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = s[i] + 1;
    }
}

int main() {
    char mystring[] = "A8M0";
    Prox_Char(mystring);
    printf("Resultado: %s\n", mystring);
    return 0;
}
