#include <stdio.h>
#include <string.h>

char *strnset(char *s, char ch, int n) {
    int len = strlen(s);
    if (n > len) {
        n = len; 
    }
    for (int i = 0; i < n; i++) {
        s[i] = ch;
    }
    return s;
}

int main() {
    char s1[] = "alfabeto";
    strnset(s1, 'y', 3);
    printf("%s\n", s1); 

    char s2[] = "alfabeto";
    strnset(s2, 'y', 23);
    printf("%s\n", s2); 
    
    return 0;
}
