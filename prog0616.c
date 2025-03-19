#include <stdio.h>
#include <ctype.h>

int memicmp(char *s1, char *s2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (tolower((unsigned char)s1[i]) != tolower((unsigned char)s2[i]))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str1[] = "Exemplo de String";
    char str2[] = "exemplo de string";
    char str3[] = "Exemplo Diferente";

    int resultado1 = memicmp(str1, str2, 15);
    int resultado2 = memicmp(str1, str3, 15);

    printf("Comparação entre str1 e str2: %s\n", resultado1 ? "Igual" : "Diferente");
    printf("Comparação entre str1 e str3: %s\n", resultado2 ? "Igual" : "Diferente");

    return 0;
}
