#include <stdio.h>
#include <string.h>

int ult_ind_chr (const char *s, char c) {
    int ultimo_indice = -1;
    for (int i = 0; s [i] != '\0'; i++) {
        if (s[i] == c) {
            ultimo_indice = i;
        }
    }
    return ultimo_indice;
}

int main () {
    printf("%d\n", ult_ind_chr ("alface", 'a'));
    printf("%d\n", ult_ind_chr ("alface", 'g'));
    
    return 0;
}

