#include <stdio.h>
#include <ctype.h>
#include <string.h>

int Is_Alfa_Digit(char *string) {
    int n = strlen(string);
    // String vazia: considerada válida.
    if(n == 0) {
        return 1;
    }
    // Percorre cada caractere da string.
    // Em posições pares (0, 2, 4, ...), esperamos uma letra.
    // Em posições ímpares (1, 3, 5, ...), esperamos um dígito.
    for (int i = 0; i < n; i++) {
        if ((i % 2) == 0) { // índice par: deve ser alfabético
            if (!isalpha(string[i])) {
                return 0; // FALSO se não for letra
            }
        } else { // índice ímpar: deve ser dígito
            if (!isdigit(string[i])) {
                return 0; // FALSO se não for dígito
            }
        }
    }
    return 1;  // Se passou por todas as verificações, retorna VERDADE (1)
}

int main() {
    // Testes conforme os exemplos
    printf("Is_Alfa_Digit(\"\") -> %s\n", Is_Alfa_Digit("") ? "<VERDADE>" : "<FALSO>");
    printf("Is_Alfa_Digit(\"1\") -> %s\n", Is_Alfa_Digit("1") ? "<VERDADE>" : "<FALSO>");
    printf("Is_Alfa_Digit(\"A\") -> %s\n", Is_Alfa_Digit("A") ? "<VERDADE>" : "<FALSO>");
    printf("Is_Alfa_Digit(\"X.Y\") -> %s\n", Is_Alfa_Digit("X.Y") ? "<VERDADE>" : "<FALSO>");
    printf("Is_Alfa_Digit(\"X7Y\") -> %s\n", Is_Alfa_Digit("X7Y") ? "<VERDADE>" : "<FALSO>");
    printf("Is_Alfa_Digit(\"1A2\") -> %s\n", Is_Alfa_Digit("1A2") ? "<VERDADE>" : "<FALSO>");
    
    return 0;
}
