#include <stdio.h>

int main()
{
    char est_civil;
    printf("Qual o estado civil: ");
    scanf(" %c", &est_civil);
    switch (est_civil)
    {
    case 'C':
    case 'c':
        printf("Casado\n");
        break;
    case 'S':
    case 's':
        printf("Solteiro\n");
        break;
    case 'D':
    case 'd':
        printf("Divorciado\n");
        break;
    case 'V':
    case 'v':
        printf("Viúvo\n");
        break;
    default:
        printf("Estado civil incorreto\n");
    }
}