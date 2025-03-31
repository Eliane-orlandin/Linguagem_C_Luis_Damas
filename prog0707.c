#include <stdio.h>

char Nome[26];

int main()
{
    int i, letras = 0;
    printf("Digite seu nome: ");
    fgets(Nome, sizeof(Nome), stdin);
    
    for (i = 0; Nome[i] != '\0'; i++) {
        if (Nome[i] != ' ' && Nome[i] != '\n') {
            letras++;
        }
    }
        ;
    printf("Seu nome tem %d letras.\n", letras);
    return 0;
}