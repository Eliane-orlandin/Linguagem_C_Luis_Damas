#include <stdio.h>

int mememp(char *s1, char *s2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str1[] = "Exemplo de string";
    char str2[] = "Exemplo de string";
    char str3[] = "Exemplo diferente";

    int resultado1 = mememp(str1, str2, 15);
    int resultado2 = mememp(str1, str3, 15);

    printf("Comparação entre str1 e str2: %s\n", resultado1 ? "Igual" : "Diferente");
    printf("Comparação entre str1 e str3: %s\n", resultado2 ? "Igual" : "Diferente");

    return 0;
}
