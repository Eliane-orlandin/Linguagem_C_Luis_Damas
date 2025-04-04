#include <stdio.h>
#include <string.h>

char* strset (char* s, char ch, int n) {
    int len = strlen (s);
    if (n > len){
        n = len; 
    }

    for (int i = 0; i < n;i++) {
        s[i] = ch;
    }
    
    return s;
}

int main () {
    char s1 [] = "alfabeto";
    char s2 [] = "alfabeto";

    strset (s1, 'y', 3);
    printf("Resultado 1: %s\n", s1);
    
    strset (s2, 'y', 23);
    printf("Resultado 2: %s\n", s2);

    return 0;
    
}