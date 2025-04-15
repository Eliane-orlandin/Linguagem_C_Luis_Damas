#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que deixa só a primeira letra de cada palavra em maiúscula
void formatar_nome(char *s) {
    int inicio_palavra = 1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace(s[i])) {
            inicio_palavra = 1;
        } else {
            if (inicio_palavra) {
                s[i] = toupper(s[i]);
                inicio_palavra = 0;
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
}

// Função principal
int main() {
    char nome[100];

    while (1) {
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; // remove o \n

        // Verifica se é para sair (ignora maiúsculas/minúsculas)
        char copia_nome[100];
        strcpy(copia_nome, nome);
        for (int i = 0; copia_nome[i]; i++)
            copia_nome[i] = tolower(copia_nome[i]);

        if (strcmp(copia_nome, "sair") == 0) {
            break;
        }

        // Formata o nome
        formatar_nome(nome);

        // Localiza o último espaço (antes do sobrenome)
        char *ultimo_espaco = strrchr(nome, ' ');

        if (ultimo_espaco) {
            // Se houver sobrenome
            printf("%s, ", ultimo_espaco + 1);  // imprime o sobrenome
            *ultimo_espaco = '\0';              // corta o sobrenome do restante
            printf("%s\n", nome);               // imprime o restante do nome
        } else {
            // Se for um nome só
            printf("%s\n", nome);
        }
    }

    return 0;
}
