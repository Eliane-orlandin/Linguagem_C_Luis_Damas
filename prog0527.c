/*#include <stdio.h>

char para_minuscula(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int main()
{

    char caractere;

    printf("Digite um caractere:\n");
    caractere = getchar();

    printf("Minúscula: %c\n", para_minuscula(caractere));

    return 0;
}
*/
/* Opção usando a biblioteca built-in <ctype.h>*/

#include <stdio.h>
#include <ctype.h> // Para usar tolower()

int main()
{
    char caractere;

    printf("Digite um caractere:\n");
    caractere = getchar(); // Lê o caractere

    printf("Minúscula: %c\n", tolower(caractere));

    return 0;
}