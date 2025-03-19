#include <stdio.h>

char *memepy(char *dest, char *orig, int n)
{
    for (int i = 0; i < n; i++)
    {
        dest[i] = orig[i];
    }
    return dest;
}

int main()
{
    char origem[] = "Exemplo de string";
    char destino[21];

    memepy(destino, origem, 20);
    destino[20] = '\0';

    printf("Destino: %s\n", destino);

    return 0;
}