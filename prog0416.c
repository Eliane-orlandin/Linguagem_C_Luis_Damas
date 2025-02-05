#include <stdio.h>

/*int main()
{
    int i, j, n;

    printf("Digite um número: ");
    scanf("%d", &n);
    for (i = 1, j = n; i <= n; i++, j--)
        printf("%d %d\n", i, j);

    return 0;
}*/
#include <stdio.h>

int main()
{
    int i, n;

    printf("Digite um número: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d  %d\n", i, n - i + 1);
    }
}