#include <stdio.h>

int main()
{
    char est_civil;
    printf("Qual o estado civil: ");
    scanf(" %c", &est_civil);
    switch (est_civil)
    {
    case 'C':
        printf("Casado\n");
        break;
    case 'S':
        printf("Solteiro\n");
        break;
    case 'D':
        printf("Divorciado\n");
        break;
    case 'V':
        printf("Viúvo\n");
        break;
    default:
        printf("Estado civil incorreto\n");
        break;
    }
}