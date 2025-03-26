#include <stdio.h>
#include <string.h>
#define DIM 20
#define SEP_NOME ", "

int main () {
    char Nome [DIM + 1], Sobrenome [DIM + 1], Completo [2 * DIM + 1];
    while (1) {
        printf("Nome: "); fgets(Nome, sizeof(Nome), stdin);
        if (strlen(Nome) == 0) break;
        printf("Sobrenome: "); fgets(Sobrenome, sizeof(Sobrenome), stdin);
        strcpy(Completo, Sobrenome);
        strcat(Completo, SEP_NOME);
        strcat(Completo, Nome);

        puts (Completo);     
    }
}