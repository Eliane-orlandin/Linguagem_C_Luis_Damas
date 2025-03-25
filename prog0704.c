#include <stdio.h>
#include <string.h>

int main(){
    char Nome [100];
    while (1) {
        puts("Digite um nome: ");
        fgets(Nome, sizeof(Nome), stdin);

        Nome[strcspn(Nome, "\n")] = '\0';
        if (Nome [0] == '\0') {
            break;
        } else {
            printf("Nome digitado: %s\n", Nome);
        }
    }
}