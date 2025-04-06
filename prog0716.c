#include <stdio.h>
#include <string.h>

int main(){
    const char *str1 = "Exemplo";
    const char *str2 = "exemplo";

    if (strcasecmp(str1, str2) == 0) {
        printf("As strings são iguais (ignorando maiúsculas e minúsculas).\n");
        
    } else {
        printf("As strings são diferentes.\n");
        
    }
    return 0;
}