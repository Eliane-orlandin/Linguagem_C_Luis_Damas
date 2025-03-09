#include <stdio.h>

int eh_quadrado(int x, int y)
{
    return (x == y * y);
}

int main()
{
    int x, y;

    printf("Digite dois números (x e y):\n");
    scanf("%d %d", &x, &y);

    if (eh_quadrado(x, y))
    {
        printf("%d é igual a %d².\n", x, y);
    }
    else
    {
        printf("%d não é igual a %d².\n", x, y);
    }
    return 0;
}

/* Opção usando a biblioteca built-in <math.h>*/
/*
#include <stdio.h>
#include <math.h>

int is_square(int x, int y)
{
    return (x == (int)pow(y, 2));
}

int main()
{
    int x, y;

    printf("Digite dois números (x e y):\n");
    scanf("%d %d", &x, &y);

    if (is_square(x, y))
    {
        printf("%d é igual a %d².\n", x, y);
    }
    else
    {
        printf("%d não é igual a %d².\n", x, y);
    }

    return 0;
}
*/