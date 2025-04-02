#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strlwr (char *str) {
    char *ptr = str;
    while (*ptr) {
        *ptr  = tolower ((unsigned char) *ptr);
        ptr++;  
    }
    return str;
}

int main(){
    char str[] = "HELLO WORLD";
    printf("Original string: %s\n", str);
    printf("Minúscula: %s\n", strlwr(str));
    
}