#include <stdio.h>

void init_str (char *s, int size) {
    for (int i = 0; i < size; i++) {
        s[i] = '\0';
    }
}

int main (){
    char str[50];
    init_str (str, sizeof(str));

    printf("String inicializada: \"%s\"\n", str);

    return 0;
    
}