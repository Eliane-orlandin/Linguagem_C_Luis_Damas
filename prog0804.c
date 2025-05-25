#include <stdio.h>
#include <string.h>

int meu_strlen(char *s)
{
    char *ptr = s;
    while (*s != '\0')
        s++;

    return (int)(s - ptr);
}

int main()
{
    char Nome[100];

    printf("Digite um nome: ");
    fgets(Nome, 100, stdin);

    Nome[strcspn(Nome, "\n")] = '\0';

    printf("%d\n", meu_strlen(Nome));

    return 0;
}