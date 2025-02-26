#include <stdio.h>

void linha();

int main()
{

    linha();
    printf("Hello World\n");
    linha();
}

void linha()
{

    int i;
    for (i = 1; i <= 11; i++)
        putchar('*');
    putchar('\n');
}