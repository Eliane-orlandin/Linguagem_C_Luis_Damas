#include <stdio.h>

/*int main()
{
    printf("********************\n");
    printf("\nNúmeros entre  1 e 5\n");
    printf("********************\n");

    int i;
    for (i = 1; i < 6; i++)
    {
        printf("%d\n", i);
    }
    printf("********************\n");
    return 0;
}*/

int main()
{

    int i;

    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    puts("Números entre 1 e 5");

    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    for (i = 1; i <= 5; i++)
        printf("%d\n", i);

    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    return 0;
}