#include <stdio.h>
#include <string.h>

// Função que verifica se o comprimento da string é igual ao valor esperado
int Is_Len_OK(char *string, int comprimento) {
    return (strlen(string) == comprimento);
}

int main() {
    // Testes conforme os exemplos
    printf("%s\n", Is_Len_OK("", 0) ? "<VERDADE>" : "<FALSO>");
    printf("%s\n", Is_Len_OK("OLA", 15) ? "<VERDADE>" : "<FALSO>");
    printf("%s\n", Is_Len_OK("OLA", 3) ? "<VERDADE>" : "<FALSO>");
    return 0;
}
