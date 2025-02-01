#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite dois inteiros: ");
    scanf("%d%d", &x, &y);
    printf("O resultado de %d == %d : %d\n", x, y, x == y);
    printf("O resultado de %d > %d : %d\n", x, y, x > y);
    printf("O resultado de %d >= %d : %d\n", x, y, x >= y);
    printf("O resultado de %d < %d : %d\n", x, y, x < y);
    printf("O resultado de %d <= %d : %d\n", x, y, x <= y);
    printf("O resultado de %d != %d : %d\n", x, y, x != y);
}