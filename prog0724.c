#include <stdio.h>
#include <ctype.h>

void UpDown(char *s) {
    int toggle = 1; // 1 para maiúscula, 0 para minúscula

    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            if (toggle) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
            toggle = !toggle; // alterna
        }
    }
}

int main() {
    char MyString[] = "Alfabeto Grego";
    UpDown(MyString);
    printf("Resultado: %s\n", MyString);
    return 0;
}
