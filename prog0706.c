#include <stdio.h>
#include <string.h>
    
    // Implementação correta de strcmp
    int meu_strcmp (char *s1, char *s2) {
        int i = 0;
        while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
            i++;
        }
        return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
    
    int main() {
        char Nome[30 + 1];
    
        do {
            printf("Nome: ");
            fgets(Nome, sizeof(Nome), stdin);
    
            Nome[strcspn(Nome, "\n")] = '\0';
    
            puts(Nome);
        } while (meu_strcmp(Nome, "sair") != 0);
    
        puts("Saindo do programa...");
        return 0;
    }
            
    
