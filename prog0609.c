#include <stdio.h>

char *menset(char *v, char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = ch;
    }
    return v;
}

int main()
{
    char vetor[10];
    menset(vetor, 'A', 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%c", vetor[i]);
    }
    return 0;
}