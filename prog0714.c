#include <stdio.h>
#include <ctype.h>

char* strlwr (char* str) {
    char* p = str;
    while (*p) {
        *p = tolower((unsigned char)*p);
        p++;
    }
    return str;
}

int main() {
    char texto[] = "ExEmPlo DE sTrinG";
    printf("Antes: %s\n", texto);
    strlwr(texto);
    printf("Depois: %s\n", texto);  
    return 0;
    
}