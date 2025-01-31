#include <stdio.h>

int main()
{
    char ch;
    printf("Digite um caractere: ");
    scanf("%c", &ch);
    printf("O caractere '%c' tem o ASCII n° %d\n", ch, ch);
}