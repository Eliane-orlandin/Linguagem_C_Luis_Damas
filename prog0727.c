#include <stdio.h>
#include <string.h>

void strduplica(char *s) {
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        s[len + i] = s[i];
    }

    s[2 * len] = '\0';
}

int main() {
    char str[100] = "Ana"; 
    strduplica(str);
    printf("%s\n", str);  
    return 0;
}
