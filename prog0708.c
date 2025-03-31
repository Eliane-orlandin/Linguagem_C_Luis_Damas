#include <stdio.h>

int strcounta(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'e') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "15 abacates";
    int count = strcounta(str);
    printf("A string \"%s\" tem %d letras 'e'.\n", str, count);
    
    return 0;
}