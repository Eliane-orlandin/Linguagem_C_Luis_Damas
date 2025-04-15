#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *Transform(char *s) {
    int len = strlen(s);
    int metade = len / 2;

    for (int i = 0; i < len; i++) {
        if (i < metade) {
            s[i] = tolower(s[i]); // primeira metade: minúsculas
        } else {
            s[i] = toupper(s[i]); // segunda metade: MAIÚSCULAS
        }
    }

    return s;
}
int main() {
    char palavra1[] = "Mafalda";
    char palavra2[] = "Mafaldas";

    printf("Transform(\"Mafalda\") -> %s\n", Transform(palavra1));
    printf("Transform(\"Mafaldas\") -> %s\n", Transform(palavra2));

    return 0;
}
