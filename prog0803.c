#include <stdio.h>

// Definição da função strlen fora do main
int minha_strlen(char *s)
{
    char *ptr = s;
    while (*s != '\0')
        s++;
    return (int)(s - ptr);
}

int main()
{
    char s[100];

    printf("Digite uma string: ");
    fgets(s, sizeof(s), stdin);

    printf("%d\n", minha_strlen(s));

    return 0;
}
